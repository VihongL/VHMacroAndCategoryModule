//
//  NSString+VHCustom.m
//  VHMacroAndCategoryModule_Example
//
//  Created by Logan on 2021/9/9.
//  Copyright © 2021 375074110. All rights reserved.
//

#import "NSString+VHCustom.h"

@implementation NSString (VHCustom)

+ (instancetype)timeformatFromSeconds:(NSTimeInterval)seconds {
    int minute = (int)seconds/60;
    int second = (int)seconds%60;
    if (minute < 100) {
        NSString *time = [NSString stringWithFormat:@"%.2d:%.2d", minute, second];
        return time;
    } else {
        NSString *time = [NSString stringWithFormat:@"%d:%.2d", minute, second];
        return time;
    }
}

@end
