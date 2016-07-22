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
    
    UILabel*label;
    NSString *str;
    if (IsNilOrNull(label)) {
        DSLog(@".label.");
    }
    if (IsNilOrNull(str)) {
        DSLog(@".str.");
    }
    
}


@end
