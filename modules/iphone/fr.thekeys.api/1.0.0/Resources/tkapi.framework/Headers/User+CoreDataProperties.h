//
//  User+CoreDataProperties.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "User.h"

@class Key, KeySharing;

NS_ASSUME_NONNULL_BEGIN

@interface User (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *identifier;
@property (nullable, nonatomic, retain) NSString *email;
@property (nullable, nonatomic, retain) NSString *firstname;
@property (nullable, nonatomic, retain) NSString *lastname;
@property (nullable, nonatomic, retain) NSString *locale;
@property (nullable, nonatomic, retain) NSString *tel;
@property (nullable, nonatomic, retain) NSString *username;
@property (nullable, nonatomic, retain) NSNumber *isCurrentUser;
@property (nullable, nonatomic, retain) NSOrderedSet<Key *> *keys;
@property (nullable, nonatomic, retain) NSOrderedSet<KeySharing *> *keySharings;

@end

NS_ASSUME_NONNULL_END
