//
//  UIcolor+TSFColor.h
//  Tool
//
//  Created by 积分宝 on 16/8/18.
//  Copyright © 2016年 积分宝. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (TSFColor)
/**
 二进制颜色转十六进制值
 */
+ (UIColor *) colorWithHexString: (NSString *) hexString;
//判断颜色是不是亮色
+(BOOL) isLightColor:(UIColor*)color ;

@end
