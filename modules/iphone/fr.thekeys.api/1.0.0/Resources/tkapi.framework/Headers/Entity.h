//
//  Entity.h
//  TheKeys
//
//  Copyright © 2015 Sedona & The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface Entity : NSManagedObject

+ (NSString *)entityName;

+ (NSFetchRequest *)newFetchRequest;

+ (id)insertNewObjectInContext:(NSManagedObjectContext *)context;

@end

NS_ASSUME_NONNULL_END

#import "Entity+CoreDataProperties.h"
