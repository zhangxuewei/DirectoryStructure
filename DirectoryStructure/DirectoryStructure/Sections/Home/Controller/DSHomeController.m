//
//  DSHomeController.m
//  DirectoryStructure
//
//  Created by aaron.wu on 16/7/22.
//  Copyright © 2016年 xuewei.zhang. All rights reserved.
//

#import "DSHomeController.h"

@interface DSHomeController () {
    
}

@end

@implementation DSHomeController

- (void)viewDidLoad {
    [super viewDidLoad];
   DSLog(@"%f",self.view.width);
    MAIN(^{
        DSLog(@"MAIN");
    });
    @WeakObj(self);
//    selfWeak
    BACK(^{
        @StrongObj(self);
        DSLog(@" %@ BACK", self.view);
    });
    
    
    
    //label的frame
    CGRect labRect = CGRectMake(100, 100, 200, 30);
    //创建一个label
    UILabel*label = [[UILabel alloc] initWithFrame:labRect];
    label.textColor = [UIColor redColor];
    label.text = NSLocalizedString(@"key", nil);
//    label.text = MyLocal(@"key");
//    label.text = NSLocalizedString(@"key", @"Localizable");
    [self.view addSubview:label];
    
    //label的frame
    CGRect labRect1 = CGRectMake(100, 150, 200, 30);
    //创建一个label
    UILabel*label1 = [[UILabel alloc] initWithFrame:labRect1];
    label1.textColor = [UIColor greenColor];
//    label1.text = NSLocalizedString(@"key", nil);
    label1.text = MyLocal(@"key");
//    label1.text = NSLocalizedString(@"key", @"Localizable");
    [self.view addSubview:label1];
    //label的frame
    CGRect labRect2 = CGRectMake(100, 200, 200, 30);
    //创建一个label
    UILabel*label2 = [[UILabel alloc] initWithFrame:labRect2];
    label2.textColor = [UIColor blueColor];
//    label2.text = NSLocalizedString(@"key", nil);
//    label2.text = MyLocal(@"key");
    label2.text = NSLocalizedString(@"key", @"Localizable");
    [self.view addSubview:label2];
    NSString *str;
    if (IsNilOrNull(label)) {
        DSLog(@".label.");
    }
    if (IsNilOrNull(str)) {
        DSLog(@".str.");
    }
}


@end
