//
//  FirmwareUploader.h
//  TheKeys
//
//  Created by Benoit Decherf on 03/06/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreBluetooth;
#import "BluetoothManager.h"

#define START_FIRMWARE_UPLOAD_CMD 4
#define FIRMWARE_UPLOAD_READY 5
#define START_SIGNATURE_UPLOAD_CMD 6
#define END_SIGNATURE_UPLOAD_CMD 7
#define SIGNATURE_VERIFICATION_FAILED 8
#define END_FIRMWARE_UPLOAD 13
#define FIRMWARE_WROTE 14


typedef void(^FirmwareUploaderCompletion)(BluetoothManagerError error);
typedef void(^FirmwareUploaderProgress)(NSString *message, int percent);


@interface FirmwareUploader : NSObject<CBPeripheralDelegate, KeyConnectionListener>

@property (nonatomic, strong) FirmwareUploaderProgress progress;
@property (nonatomic, strong) FirmwareUploaderCompletion completion;


@property (nonatomic, strong) CBUUID *  CBUUIDServiceAdminLockerUUID;
@property (nonatomic, strong) CBUUID *  CBUUIDCtrlLockerCharUUID;
@property (nonatomic, strong) CBUUID *  CBUUIDDataLockerCharUUID;


-(void)uploadFirmware:(NSData *)pFirmware
        withSignature:(NSData *)pSignature
            forLocker:(Key *)pkey
             progress:(FirmwareUploaderProgress)progress
           completion:(FirmwareUploaderCompletion)completion;

@end
