//
//  APIClient.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

#import "APIUser.h"
#import "APIKey.h"
#import "APIKeySharing.h"

typedef NS_ENUM(NSUInteger, APIClientError) {
    kAPIClientErrorNoError,
    kAPIClientErrorForbidden,
    kAPIClientErrorConnection,
    kAPIClientErrorServer
};

typedef void(^APIClientCompletion)(APIClientError error, id responseObject);

@interface APIClient : NSObject
@property (nonatomic, strong) NSString *baseURL;
@property (nonatomic, strong) NSString *apiVersion;

@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *token;

+ (void)initWithBaseURL:(NSString*)baseURL
             andVersion:(NSString*)apiVersion;

+ (instancetype)sharedClient;

- (void)reset;

- (void)jwtAuthFor:(NSString *)username
      withPassword:(NSString*)password
                  completion:(APIClientCompletion)completion;

- (void)welcome:(NSString*)publicKey
          token:(NSString*)token
 withCompletion:(APIClientCompletion)completion;

- (void)userWithUsername:(NSString *)username
              completion:(APIClientCompletion)completion;

- (void)signupUserWithUser:(APIUser *)user
                completion:(APIClientCompletion)completion;

- (void)updateUserWithUsername:(NSString *)username
                          user:(APIUser *)user
                    completion:(APIClientCompletion)completion;

- (void)keyWithIdentifier:(NSNumber *)keyIdentifier
               completion:(APIClientCompletion)completion;

- (void)updateKeyWithIdentifier:(NSNumber *)keyIdentifier
                            key:(APIKey *)key
                     completion:(APIClientCompletion)completion;


- (void)openKeyWithIdentifier:(NSNumber *)keyIdentifier
                   completion:(APIClientCompletion)completion;

- (void)closeKeyWithIdentifier:(NSNumber *)keyIdentifier
                    completion:(APIClientCompletion)completion;

- (void)scanKeyWithQRCode:(NSString *)QRCode
               completion:(APIClientCompletion)completion;

- (void)linkKeyWithQRCode:(NSString *)QRCode
                     User:(NSString *)User
               completion:(APIClientCompletion)completion;

- (void)createKeySharingWithKeyIdentifier:(NSNumber *)keyIdentifier
                               keySharing:(APIKeySharing *)keySharing
                               completion:(APIClientCompletion)completion;

- (void)createAccessoryKeySharingWithKeyIdentifier:(NSNumber *)keyIdentifier
                               accessoryIdentifier:(NSString *)accessoryIdentifier
                                        keySharing:(APIKeySharing *)keySharing
                                        completion:(APIClientCompletion)completion;

- (void)updateKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                            keySharing:(APIKeySharing *)keySharing
                            completion:(APIClientCompletion)completion;

- (void)updateAccessoryKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                            accessoryIdentifier:(NSString *)accessoryIdentifier
                                     keySharing:(APIKeySharing *)keySharing
                                     completion:(APIClientCompletion)completion;

- (void)activateKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                              completion:(APIClientCompletion)completion;

- (void)deactivateKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                                completion:(APIClientCompletion)completion;

- (void)activateAccessoryKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                              completion:(APIClientCompletion)completion;

- (void)deactivateAccessoryKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                                completion:(APIClientCompletion)completion;

- (void)deleteKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                            completion:(APIClientCompletion)completion;

- (void)deleteAccessoryKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                                     completion:(APIClientCompletion)completion;



- (void)deletePendingKeySharingWithIdentifier:(NSNumber *)keySharingIdentifier
                                   completion:(APIClientCompletion)completion;


- (void)keySharingsWithKeyIdentifier:(NSNumber *)keyIdentifier
                          completion:(APIClientCompletion)completion;

- (void)keySharingsWithCompletion:(APIClientCompletion)completion;

- (void)sendLogs:(NSString*)serrureId
            data:(NSDictionary *)data
      completion:(APIClientCompletion)completion;

-(void)getFirmware:(NSNumber *)product
        completion:(APIClientCompletion)completion;
@end
