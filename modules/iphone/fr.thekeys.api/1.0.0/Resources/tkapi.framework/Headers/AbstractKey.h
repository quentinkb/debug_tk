//
//  AbstractKey.h
//  TheKeys
//
//  Created by Benoit DECHERF on 07/11/2016.
//  Copyright © 2016 Sedona & The Keys. All rights reserved.
//



#import "BluetoothManager.h"

@protocol KeyEventListener
-(void)didActionStartForKey:(Key*)key;
-(void)didStatusChanged:(NSString*)new_status forKey:(Key*)key;
-(void)didActionCompleteForKey:(Key*)key;
@end

@interface AbstractKey : NSObject<CBPeripheralDelegate, KeyConnectionListener, KeyScannerListener>

- (BluetoothManager*) manager;

- (BOOL)isKeyNearby:(Key *)key;

- (void)openOrClose:(BOOL)open
                key:(Key *)key
           progress:(BluetoothManagerProgress)progress
         completion:(BluetoothManagerCompletion)completion;

- (void)registerKey:(Key*)key;

@property (nonatomic, strong) CBUUID *  CBUUIDServiceLockerUUID;
@property (nonatomic, strong) CBUUID *  CBUUIDOpenLockerCharUUID;
@property (nonatomic, strong) CBUUID *  CBUUIDPositionLockerCharUUID;
@property (nonatomic, strong) CBUUID *  CBUUIDRandomLockerCharUUID;
@property (nonatomic, strong) CBUUID *  CBUUIDStatusLockerCharUUID;
@property (nonatomic, strong) CBUUID *  UUIDWithStringFormat;

@property (nonatomic) BOOL close;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) BluetoothManagerProgress progress;
@property (nonatomic, strong) BluetoothManagerCompletion completion;
@property (nonatomic, strong) NSTimer *disconnectTimer;

@end

