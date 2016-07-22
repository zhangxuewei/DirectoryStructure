//
//  UtilsMacro.h
//  DirectoryStructure
//
//  Created by aaron.wu on 16/7/22.
//  Copyright © 2016年 xuewei.zhang. All rights reserved.
//  放的是一些方便使用的宏定义

#ifndef UtilsMacro_h
#define UtilsMacro_h

#define WeakObj(o) autoreleasepool{} __weak typeof(o) o##Weak = o
#define StrongObj(o) autoreleasepool{} __strong typeof(o) o = o##Weak
//#define StrongObj(o) autoreleasepool{} __strong typeof(o##Weak) o##Strong = o##Weak


//获取系统版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define CurrentSystemVersion [[UIDevice currentDevice] systemVersion]

//判断是真机还是模拟器
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

//单例化一个类
#define SYNTHESIZE_SINGLETON_FOR_CLASS(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)shared##classname \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = ［self alloc] init]; \
} \
} \
\
return shared##classname; \
}


//设置View的tag属性
#define VIEWWITHTAG(_OBJECT, _TAG) [_OBJECT viewWithTag : _TAG]
//程序的本地化,引用国际化的文件
#define MyLocal(x, ...) NSLocalizedString(x, nil)

//G－C－D
#define BACK(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define MAIN(block) dispatch_async(dispatch_get_main_queue(),block)

//文件目录
#define kPathTemp      NSTemporaryDirectory()
#define kPathDocument [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory,\
NSUserDomainMask, YES) objectAtIndex:0]

#define kPathCache   [NSSearchPathForDirectoriesInDomains(NSCachesDirectory,\
NSUserDomainMask, YES) objectAtIndex:0]

//角度转弧度
#define DEGREES_TO_RADIANS(d) (d * M_PI / 180)

//大于等于7.0的ios版本
#define iOS7_OR_LATER SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")

//大于等于8.0的ios版本
#define iOS8_OR_LATER SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")

// 获取RGB颜色
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)

#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))


//转换
#define NSStringFromInt(intValue) [NSString stringWithFormat:@"%d",intValue]


//字体大小
#define kFont38 [UIFont systemFontOfSize:38]
#define kFont34 [UIFont systemFontOfSize:34]
#define kFont30 [UIFont systemFontOfSize:30]
#define kFont28 [UIFont systemFontOfSize:28]
#define kFont26 [UIFont systemFontOfSize:26]
#define kFont25 [UIFont systemFontOfSize:25]
#define kFont24 [UIFont systemFontOfSize:24]
#define kFont22 [UIFont systemFontOfSize:22]
#define kFont20 [UIFont systemFontOfSize:20]
#define kFont18 [UIFont systemFontOfSize:18]
#define kFont17 [UIFont systemFontOfSize:17]
#define kFont15 [UIFont systemFontOfSize:15]
#define kFont16 [UIFont systemFontOfSize:16]
#define kFont14 [UIFont systemFontOfSize:14]
#define kFont13 [UIFont systemFontOfSize:13]
#define kFont12 [UIFont systemFontOfSize:12]
#define kFont11 [UIFont systemFontOfSize:11]
#define kFont10 [UIFont systemFontOfSize:10]

#endif /* UtilsMacro_h */
