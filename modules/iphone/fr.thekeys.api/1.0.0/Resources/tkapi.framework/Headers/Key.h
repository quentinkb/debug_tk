//
//  Key.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Entity.h"

@class KeySharing, User, Log, Product;

NS_ASSUME_NONNULL_BEGIN

@interface Key : Entity

+ (NSFetchRequest *)newFetchRequestWithIdentifier:(NSNumber *)identifier;
+ (NSFetchRequest *)newFetchRequestWithQRCode:(NSString *)qrcode;
+ (NSFetchRequest *)newFetchRequestWithIdentifierSerrure:(NSNumber *)identifierSerrure;

- (BOOL)isShared;
- (BOOL)isOpen;
- (bool)isNearby;

@end

NS_ASSUME_NONNULL_END

#import "Key+CoreDataProperties.h"
