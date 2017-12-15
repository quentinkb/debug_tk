//
//  Accessory.h
//  TheKeys
//
//  Created by Sacnicte Ramirez on 23/06/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Entity.h"

@import UIKit;

NS_ASSUME_NONNULL_BEGIN


@interface Accessory : Entity

+ (NSFetchRequest *)newFetchRequestWithIdentifier:(NSNumber *)identifier;

@end

NS_ASSUME_NONNULL_END

#import "Accessory+CoreDataProperties.h"
