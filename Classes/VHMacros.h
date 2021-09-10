//
//  VHMacros.h
//  VHMacroAndCategoryModule_Example
//
//  Created by Logan on 2021/9/9.
//  Copyright © 2021 375074110. All rights reserved.
//


#define VHLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#define VHBackgroundColor           [UIColor colorWithHexString:@"0E121B"]
#define VHForegroundColor           [UIColor colorWithHexString:@"FCCA07"]
#define VHScreenWidth               [UIScreen mainScreen].bounds.size.width
#define VHScreenHeight              [UIScreen mainScreen].bounds.size.height
#define VHMaxScreenWidth            MAX(VHScreenWidth, VHScreenHeight)
#define VHMinScreenHeight           MIN(VHScreenWidth, VHScreenHeight)
//是否iPhone X
#define VHIsiPhoneX \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})
#define VHNavigationBarHeight       (VHIsiPhoneX ? 88 : 64)
#define VHTabbarHeight              (VHIsiPhoneX ? 83 : 49)
#define VHStatusBarHeight           (VHIsiPhoneX ? 44 : 20)
#define VHBottomBarHeight           (VHIsiPhoneX ? 20 : 0)

#import "NSString+VHCustom.h"
#import "UIColor+VHCustom.h"

