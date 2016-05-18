//
//  RootViewController.h
//  Sample-Vi
//
//  Created by Sem on 5/1/2559 BE.
//  Copyright © 2559 Sem. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;


@property (strong, NS_NONATOMIC_IOSONLY) IBOutlet UITextField *name;
@property (strong, NS_NONATOMIC_IOSONLY) IBOutlet UITextField *addr;
@property (strong, NS_NONATOMIC_IOSONLY) IBOutlet UITextField *phone;
- (IBAction) saveData:(id)sender;
- (IBAction) findData:(id)sender;

@property (strong, nonatomic) NSString *dbPath;
@property (nonatomic) sqlite3 *contectDB;


@end

