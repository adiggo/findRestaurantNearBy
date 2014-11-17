//
//  DetailViewController.h
//  CoffeeKit
//
//  Created by Li, Xiaoping on 11/14/14.
//  Copyright (c) 2014 Xiaoping. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

