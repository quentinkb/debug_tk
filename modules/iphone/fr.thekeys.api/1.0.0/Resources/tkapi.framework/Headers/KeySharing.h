//
//  KeySharing.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Entity.h"
#import "Accessory.h"

@class Key, User;

NS_ASSUME_NONNULL_BEGIN

@interface KeySharing : Entity

+ (NSFetchRequest *)newFetchRequestWithIdentifier:(NSNumber *)identifier;

@end

NS_ASSUME_NONNULL_END

#import "KeySharing+CoreDataProperties.h"
