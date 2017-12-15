//
//  APIKeySharing.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

@import Foundation;

@interface APIKeySharing : NSObject

@property BOOL active;

@property (nonatomic, strong) NSDate *beginDate;
@property (nonatomic, strong) NSDate *endDate;

@property (nonatomic, strong) NSArray *days;

@property (nonatomic, strong) NSDate *beginTime;
@property (nonatomic, strong) NSDate *endTime;

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *phoneNumber;
@property (nonatomic, strong) NSString *desc;

@property (nonatomic, strong) NSString *code;

- (NSMutableDictionary *)dictionaryValueWithPrefix:(NSString *)prefix;

@end
