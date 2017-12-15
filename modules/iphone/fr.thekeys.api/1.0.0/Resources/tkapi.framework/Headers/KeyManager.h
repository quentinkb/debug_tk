//
//  KeyManager.h
//  tkapi
//
//  Created by Sacnicte Ramirez on 21/07/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyManager : NSObject
-(NSArray*) keys;
-(void)open:(NSString*)identifier
 onProgress:(void(^)(NSString*))onProgress
   onFinish:(void(^)(int))onFinish;

@end
