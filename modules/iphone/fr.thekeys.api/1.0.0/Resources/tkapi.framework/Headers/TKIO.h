//
//  TKIO.h
//  TheKeys
//
//  Created by Sacnicte Ramirez on 23/09/2016.
//  Copyright © 2016 Sedona & The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BluetoothManager.h"
#import "AbstractKey.h"

@interface TKIO : AbstractKey
+ (instancetype)sharedManager;

@end