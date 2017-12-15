//
//  User.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Entity.h"

@import UIKit;

@class NBPhoneNumber;

NS_ASSUME_NONNULL_BEGIN

@interface User : Entity

+ (NSFetchRequest *)newCurrentUserFetchRequest;

+ (NSFetchRequest *)newFetchRequestWithUsername:(NSString *)username;

- (NSString *)name;

- (NBPhoneNumber *)phoneNumber;
- (NSString *)formattedTel;

- (void)smsWithController:(UIViewController *)controller;
- (void)callWithController:(UIViewController *)controller;

@end

NS_ASSUME_NONNULL_END

#import "User+CoreDataProperties.h"
