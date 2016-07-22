//
//  AppMacro.h
//  DirectoryStructure
//
//  Created by aaron.wu on 16/7/22.
//  Copyright © 2016年 xuewei.zhang. All rights reserved.
//  放app相关的宏定义

#ifndef AppMacro_h
#define AppMacro_h

//机器类型
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

//屏幕尺寸
#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
//#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
//#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

//手机型号
#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

//自定义log
#ifdef DEBUG
#define DSLog(...) NSLog(__VA_ARGS__)
#else
#define DSLog(...)
#endif

//导航相关
#define DEFAULT_NAVIGATION_BAR_HEIGHT 44
#define DEFAULT_NAVIGATION_TITLE_WIDTH 180
#define DEFAULT_TAB_BAR_HEIGHT 49

#endif /* AppMacro_h */
