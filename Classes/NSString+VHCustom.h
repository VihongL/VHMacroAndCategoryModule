//
//  NSString+VHCustom.h
//  VHMacroAndCategoryModule_Example
//
//  Created by Logan on 2021/9/9.
//  Copyright © 2021 375074110. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (VHCustom)

+ (instancetype)timeformatFromSeconds:(NSTimeInterval)seconds;

@end

NS_ASSUME_NONNULL_END
