//
//  OpenAction.h
//  TheKeys
//
//  Created by Benoit DECHERF on 01/06/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//
@import CoreBluetooth;
#import "AbstractAction.h"
#import "tkapi/Key.h"

#define STATUS_END_MESSAGE 7

@interface OpenAction : NSObject <AbstractAction, CBPeripheralDelegate>

typedef enum  {
    SUCCESS,
    CLOSING,
    OPENING,
    CLOSED,
    OPENED,
    
    INVALID_KEY,
    ACCESS_DENIED,
    NO_KEY
} Status;


typedef void(^OnDoneCallback)(Status result);
typedef void(^OnProgressCallback)(Status status);


-(id) initWithPeripheral:(CBPeripheral*)pPeripheral
              statusChar:(CBCharacteristic*)pStatusChar
              randomChar:(CBCharacteristic*)pRandomChar
                openChar:(CBCharacteristic*)pOpenChar
                  onDone: (OnDoneCallback)pOnDone
              onProgress: (OnProgressCallback)pOnProgress
                     key: (Key*)pKey
              actionOpen: (BOOL)pActionOpen;

@end
