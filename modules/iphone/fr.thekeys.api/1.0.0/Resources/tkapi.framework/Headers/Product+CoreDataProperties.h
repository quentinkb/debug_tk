//
//  Product+CoreDataProperties.h
//  TheKeys
//
//  Created by Sacnicte Ramirez on 02/06/2017.
//  Copyright © 2017 The Keys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Product.h"

@interface Product (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *identifier;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *version;

@end
