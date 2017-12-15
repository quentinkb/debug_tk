//
//  TheKeysDataSource.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

#import "Key.h"
#import "KeySharing.h"
#import "User.h"
#import "Product.h"

@interface TheKeysDataSource : NSObject

@property (nonatomic, readonly) NSManagedObjectContext *mainContext;

+ (instancetype)sharedDataSource;

- (void)updateWithUserJSON:(id)userJSON
           keySharingsJSON:(id)keySharingsJSON;

- (void)updateWithKeyJSON:(id)keyJSON
          keySharingsJSON:(id)keySharingsJSON;

- (void)updateWithKey:(Key *)key
      keySharingsJSON:(NSDictionary *)keySharingsJSON;

-(void)setNearby:(BOOL)isNearby forKey:(Key*)key;

- (void)reset;

@end
