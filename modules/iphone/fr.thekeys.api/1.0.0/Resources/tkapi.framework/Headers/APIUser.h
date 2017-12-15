//
//  APIUser.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

@import Foundation;

@interface APIUser : NSObject

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *tel;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *email2;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *notificationToken;

- (NSMutableDictionary *)dictionaryValue;

@end
