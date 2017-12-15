//
//  TheKeysv2.h
//  TheKeys
//
//  Created by tmoussajee on 04/05/2016.
//  Copyright © 2016 Sedona & The Keys. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "tkapi/BluetoothManager.h"
#import "tkapi/AbstractKey.h"

@interface TheKeysv2 : AbstractKey
+ (instancetype)sharedManager;

@property (nonatomic, strong) CBUUID *  CBUUIDServiceAdminLockerUUID;
@property (nonatomic, strong) CBUUID *  CBUUIDCtrlLockerCharUUID;
@property (nonatomic, strong) CBUUID *  CBUUIDDataLockerCharUUID;

-(void)connectAndSendLogs:(Key *)pkey
                 progress:(BluetoothManagerProgress)progress
               completion:(BluetoothManagerCompletion)completion;

@end
