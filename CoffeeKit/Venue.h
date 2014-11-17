//
//  Venue.h
//  CoffeeKit
//
//  Created by Li, Xiaoping on 11/14/14.
//  Copyright (c) 2014 Xiaoping. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Location;
@interface Venue : NSObject

@property (nonatomic, strong) NSString *name;

@property (nonatomic, strong) Location *location;

@end
