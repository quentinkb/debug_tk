//
//  Key+CoreDataProperties.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Key.h"
//#import "TKAPIConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface Key (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *identifier;
@property (nullable, nonatomic, retain) NSString *desc;
@property (nullable, nonatomic, retain) NSString *code;
@property (nullable, nonatomic, retain) NSString *codeSerrure;
@property (nullable, nonatomic, retain) NSString *couleur;
@property (nullable, nonatomic, retain) NSString *etat;
@property (nullable, nonatomic, retain) NSString *identifierSerrure;
@property (nullable, nonatomic, retain) NSNumber *mainLibre;
@property (nullable, nonatomic, retain) NSString *nom;
@property (nullable, nonatomic, retain) NSString *qrcode;
@property (nullable, nonatomic, retain) NSOrderedSet<KeySharing *> *keySharings;
@property (nullable, nonatomic, retain) NSSet<Log *> *logs;
@property (nullable, nonatomic, retain) Log *lastLog;
@property (nullable, nonatomic, retain) User *user;
@property (nullable, nonatomic, retain) NSNumber *productId;
@property (nullable, nonatomic, retain) Product *product;
@property (nullable, nonatomic, retain) NSNumber *nearby;
@property (nullable, nonatomic, retain) NSNumber *lockerOnRight;
@property (nullable, nonatomic, retain) NSNumber *battery;
@property (nullable, nonatomic, retain) NSDate *batteryTime;
@property (nullable, nonatomic, retain) NSString *publicKey;
@property (nullable, nonatomic, retain) NSString *message;
@property (nullable, nonatomic, retain) NSNumber *version;



@end

NS_ASSUME_NONNULL_END
