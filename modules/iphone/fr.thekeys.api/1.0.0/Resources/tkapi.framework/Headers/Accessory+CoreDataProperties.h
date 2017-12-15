//
//  Accessory+CoreDataProperties.h
//  TheKeys
//
//  Created by Sacnicte Ramirez on 23/06/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Accessory.h"

@class KeySharing;

NS_ASSUME_NONNULL_BEGIN


@interface Accessory (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *identifier;
@property (nullable, nonatomic, retain) NSString *idAccessory;
@property (nullable, nonatomic, retain) NSNumber *type;
@property (nullable, nonatomic, retain) NSString *name;

@end

NS_ASSUME_NONNULL_END
