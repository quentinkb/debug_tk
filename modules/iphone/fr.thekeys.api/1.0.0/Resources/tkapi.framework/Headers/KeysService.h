//
//  KeysService.h
//  TheKeys
//
//  Created by Sacnicte Ramirez on 11/10/2016.
//  Copyright © 2016 Sedona & The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeysService : NSObject

+ (instancetype)sharedClient;

-(void)reloadKeyWithIdentifier:(NSNumber*)identifier;
-(void)reloadUser;
-(void)reloadAllKeyForUsername:(NSString*)username;


@end
