//
//  ViewController.h
//  MyTestProject
//
//  Created by Alexandr Pekhterev on 22/01/2018.
//  Copyright © 2018 Alexandr Pekhterev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *textLabel;

@property (weak, nonatomic) IBOutlet UIButton *button;

- (IBAction)buttonPress:(id)sender;

@end

