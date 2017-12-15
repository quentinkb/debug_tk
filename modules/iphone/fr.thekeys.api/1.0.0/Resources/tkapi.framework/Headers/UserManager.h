//
//  UserManager.h
//  tkapi
//
//  Created by Sacnicte Ramirez on 21/07/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^UserManagerLoginResult)(int error);

@interface UserManager : NSObject
-(void)login:(NSString *)username
withPassword:(NSString*)password
    andToken:(NSString*)token
  completion:(UserManagerLoginResult)onResult;

-(void)synchronizeUser:(void(^)(int))onSynchronized;

@end
