//
//  BeaconManager.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

@import Foundation;

@interface BeaconManager : NSObject

+ (instancetype)sharedManager;

- (void)start;

@end
