//
//  LogsRetrieverAction.h
//  TheKeys
//
//  Created by Benoit Decherf on 02/06/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

@import CoreBluetooth;
#import "AbstractAction.h"
#import "tkapi/Key.h"

#define CTRL_STATE_START_READ_LOGS 2
#define CTRL_STATE_END_READ_LOGS 3


@interface LogsRetrieverAction  : NSObject <AbstractAction, CBPeripheralDelegate>

typedef void(^OnLogsSentCallback)(NSDictionary *response);

-(id) initWithPeripheral:(CBPeripheral*)pPeripheral
                ctrlChar:(CBUUID*)pCtrlChar
                dataChar:(CBUUID*)pDataChar
                     key:(Key *)pKey
                  onDone: (OnLogsSentCallback)pOnDone;

@end
