//
//  BluetoothManager.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

@import UIKit;
@import CoreBluetooth;
@class Key;


#import "TheKeysDataSource.h"

#import "TKAPIConstants.h"


typedef enum {
    kBluetoothManagerNoError,
    kBluetoothManagerTimeoutError,
    kBluetoothManagerInvalidKey,
    kBluetoothManagerAccessDenied,
    kBluetoothManagerUnknownError,
    kBluetoothManagerNoKey
    
} BluetoothManagerError;

typedef enum {
    kBluetoothManagerDefault,
    kBluetoothManagerNotifyAndStop,
} BluetoothManagerMode;

typedef void(^BluetoothManagerCompletion)(BluetoothManagerError error);
typedef void(^BluetoothManagerProgress)(NSString *message);

@protocol KeyConnectionListener
-(void)didConnect:(CBPeripheral*)peripheral;
-(void)didFailToConnect;
-(void)didDisconnect:(CBPeripheral*)peripheral;
@end

@protocol KeyScannerListener
-(void)didFoundKey:(Key*)key withRSSI:(NSNumber *)RSSI;
@end

@class BluetoothManager;

@protocol BluetoothManagerDelegate <NSObject>

- (void)bluetoothManager:(BluetoothManager *)bluetoothManager didFoundKeyWithIdentifier:(NSString *)keyIdentifier;
- (void)bluetoothManager:(BluetoothManager *)bluetoothManager didLostKeyWithIdentifier:(NSString *)keyIdentifier;
- (void)bluetoothManagerdidRunNewScan:(BluetoothManager *)bluetoothManager ;

@end

@interface BluetoothManager : NSObject

@property (nonatomic, strong) CBCentralManager *centralManager;

+ (instancetype)sharedManager;

- (void)startScannerWithMode:(BluetoothManagerMode)mode;
- (void)stopScanner;

- (void)addDelegate:(id<BluetoothManagerDelegate>)delegate;
- (void)removeDelegate:(id<BluetoothManagerDelegate>)delegate;

-(void)addConnectionListener:(id<KeyConnectionListener>)listener forPeripheral:(CBPeripheral *)peripheral;
-(void)addScannerListener:(id<KeyScannerListener>) listener forIdentifier:(NSNumber*)keyIdentifier;
@end

@interface BluetoothManager () <CBCentralManagerDelegate>

@property (nonatomic, strong) dispatch_queue_t queue;


@property (nonatomic, strong) NSMutableDictionary *peripherals;
@property (nonatomic, strong) NSMutableSet *delegates;

@property (nonatomic, strong) NSString *  CBUUIDServiceFilterUUID;

@property (nonatomic) BOOL shouldStartScanner;

@property (nonatomic) BluetoothManagerMode mode;
@property (nonatomic) UIBackgroundTaskIdentifier scannerBackgroundTask;

@end


@interface CBUUID (BluetoothManager)

+ (instancetype)lockerUUIDWithString:(NSString *)theString;
@end

@interface NSData (BluetoothManager)

- (unsigned int)unsignedIntValue;

@end


