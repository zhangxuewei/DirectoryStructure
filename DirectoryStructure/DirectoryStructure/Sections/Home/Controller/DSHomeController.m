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
    [DSNOTIFICATION_CENTER postNotificationName:@"" object:nil];
    
   DSLog(@"%f",self.view.width);
    
    //NSString *imgIcon = @"";
    //UIImage *img = [UIImage imageNamed:imgIcon];
    //CGFloat imgWidth = img.width;
    //CGFloat imgHeight = img.height;
    //CGRect imgViewRect = CGRectMake(100, 100, imgWidth, imgHeight);
    //创建一个imageview
    UIImageView *imgView = [[UIImageView alloc] init];
    //[imgView setFrame:imgViewRect];
    imgView.backgroundColor = [UIColor whiteColor];
    //[imgView setImage:[UIImage imageNamed:imgIcon]];
    //imgView.layer.masksToBounds = YES;
    //imgView.layer.cornerRadius = 5;
    [self.view addSubview:imgView];
    [imgView sd_setImageWithURL:nil completed:^(UIImage *image, NSError *error, SDImageCacheType cacheType, NSURL *imageURL) {
        
    }];
    
}


@end
