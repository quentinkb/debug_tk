//
//  APIKey.h
//  TheKeys
//
//  Created by Sacnicte Ramirez on 02/02/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

@import Foundation;



@interface APIKey : NSObject

@property (nonatomic, strong) NSString *nom;
@property (nonatomic, strong) NSString *desc;
@property (nonatomic, strong) NSNumber *lockerOnRight;
@property (nonatomic, strong) NSNumber *handFree;

- (NSMutableDictionary *)dictionaryValue;

@end

