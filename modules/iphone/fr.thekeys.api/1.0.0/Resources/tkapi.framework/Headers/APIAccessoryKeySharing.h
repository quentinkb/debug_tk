//
//  APIAccessoryKeySharing.h
//  TheKeys
//
//  Created by Sacnicte Ramirez on 23/06/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APIAccessoryKeySharing : NSObject

@property BOOL active;

@property (nonatomic, strong) NSDate *beginDate;
@property (nonatomic, strong) NSDate *endDate;

@property (nonatomic, strong) NSArray *days;

@property (nonatomic, strong) NSDate *beginTime;
@property (nonatomic, strong) NSDate *endTime;

@property (nonatomic, strong) NSString *idAccessory;
@property (nonatomic, strong) NSString *desc;

- (NSMutableDictionary *)dictionaryValueWithPrefix:(NSString *)prefix;

@end
