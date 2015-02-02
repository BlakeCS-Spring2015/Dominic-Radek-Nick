//
//  DataViewController.h
//  ObjectiveCTest
//
//  Created by Dominic LeBlanc on 2/2/15.
//  Copyright (c) 2015 Dominic LeBlanc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

