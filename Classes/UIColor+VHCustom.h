//
//  UIColor+VHCustom.h
//  VHMacroAndCategoryModule_Example
//
//  Created by Logan on 2021/9/9.
//  Copyright © 2021 375074110. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (VHCustom)

+ (instancetype)colorWithHexString:(NSString *)hexStr;

+ (instancetype)colorWithHexString:(NSString *)hexStr alpha:(CGFloat)alpha;

@end

NS_ASSUME_NONNULL_END
