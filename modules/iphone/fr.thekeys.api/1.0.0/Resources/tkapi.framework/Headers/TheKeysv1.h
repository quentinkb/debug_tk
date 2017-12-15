//
//  TheKeysv1.h
//  TheKeys
//
//  Created by tmoussajee on 04/05/2016.
//  Copyright © 2016 Sedona & The Keys. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BluetoothManager.h"
#import "AbstractKey.h"

@interface TheKeysv1 : AbstractKey
+ (instancetype)sharedManager;

@end
