//
//  UtilsMacro.h
//  DirectoryStructure
//
//  Created by aaron.wu on 16/7/22.
//  Copyright © 2016年 xuewei.zhang. All rights reserved.
//  放的是一些方便使用的宏定义

#ifndef UtilsMacro_h
#define UtilsMacro_h

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

//颜色
#define kDSColorRGB(r,g,b) [UIColor \
colorWithRed:r/255.0 \
green:g/255.0 \
blue:b/255.0 alpha:1]

#define kDSColorRGBA(r,g,b) [UIColor\
colorWithRed:r/255.0\
green:g/255.0\
blue:b/255.0\
alpha:.5]

//转换
#define NSStringFromInt(intValue) [NSString stringWithFormat:@"%d",intValue]

#endif /* UtilsMacro_h */
