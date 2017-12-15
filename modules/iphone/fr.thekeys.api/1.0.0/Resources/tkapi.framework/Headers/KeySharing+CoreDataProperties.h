//
//  KeySharing+CoreDataProperties.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "KeySharing.h"

NS_ASSUME_NONNULL_BEGIN

@interface KeySharing (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *identifier;
@property (nullable, nonatomic, retain) NSString *desc;
@property (nullable, nonatomic, retain) NSNumber *actif;
@property (nullable, nonatomic, retain) NSDate *dateDebut;
@property (nullable, nonatomic, retain) NSDate *dateFin;
@property (nullable, nonatomic, retain) NSDate *heureDebut;
@property (nullable, nonatomic, retain) NSDate *heureFin;
@property (nullable, nonatomic, retain) NSString *jours;
@property (nullable, nonatomic, retain) Key *key;

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *type; //pending = 3, user = 1, accessory = 2
@property (nullable, nonatomic, retain) NSString *phone;
@property (nullable, nonatomic, retain) Accessory *accessory;
@property (nullable, nonatomic, retain) User *user;
@property (nullable, nonatomic, retain) NSString *code;

@end

NS_ASSUME_NONNULL_END
