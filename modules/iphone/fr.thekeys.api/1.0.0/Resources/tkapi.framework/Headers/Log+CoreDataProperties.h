//
//  Log+CoreDataProperties.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Log.h"

NS_ASSUME_NONNULL_BEGIN

@interface Log (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *read;
@property (nullable, nonatomic, retain) NSString *action;
@property (nullable, nonatomic, retain) NSNumber *status;
@property (nullable, nonatomic, retain) NSString *utilisateur;
@property (nullable, nonatomic, retain) Key *key;
@property (nullable, nonatomic, retain) NSDate *actionAt;

@end

NS_ASSUME_NONNULL_END
