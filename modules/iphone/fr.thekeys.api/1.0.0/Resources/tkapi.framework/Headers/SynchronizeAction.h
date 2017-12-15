//
//  SynchronizeAction.h
//  TheKeys
//
//  Created by Benoit DECHERF on 31/05/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//
@import CoreBluetooth;
#import "AbstractAction.h"

#define CTRL_STATE_START_WRITE 0
#define CTRL_STATE_END_WRITE 1



@interface SynchronizeAction : NSObject <AbstractAction, CBPeripheralDelegate>

typedef void(^OnSynchronizedCallback)(int result);


-(id) initWithPeripheral:(CBPeripheral*)pPeripheral
                ctrlChar:(CBUUID*)pCtrlChar
                dataChar:(CBUUID*)pDataChar
                   message:(NSString *)pMessage
                    onDone: (OnSynchronizedCallback)pOnDone;
@end
