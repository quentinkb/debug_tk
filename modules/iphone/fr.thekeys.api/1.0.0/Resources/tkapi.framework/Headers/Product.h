//
//  Product.h
//  TheKeys
//
//  Created by Sacnicte Ramirez on 02/06/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Entity.h"

NS_ASSUME_NONNULL_BEGIN

@interface Product : Entity
+ (NSFetchRequest *)newFetchRequestWithIdentifier:(NSNumber *)identifier;
@end

NS_ASSUME_NONNULL_END

#import "Product+CoreDataProperties.h"
