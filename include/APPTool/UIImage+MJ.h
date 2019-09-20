//
//  UIImage+MJ.h
//  ItcastWeibo
//
//  Created by apple on 14-5-5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MJ)


/**
 *  加载图片
 *
 *  @param name 图片名
 */
+ (UIImage *)imageWithName:(NSString *)name;



/**
 *  返回一张自由拉伸的图片
 */
+ (UIImage *)resizedImageWithName:(NSString *)name;



/*
 *  使用UIColor创建UIImage
 */
+ (UIImage *) createImageWithColor: (UIColor *)color;



/*
 *生成二维码
 */
+(UIImage*)returnTwoDimensionCode:(NSString *)text;


/*
 *颜色生成一张渐变图片
 */
+(UIImage*) BgImageFromColors:(NSArray*)colors withFrame: (CGRect)frame;

/// 获取屏幕截图
///
/// @return 屏幕截图图像
+ (UIImage *)nox_screenShot;


/**
 *  生成一张高斯模糊的图片
 *
 *  @param image 原图
 *  @param blur  模糊程度 (0~1)
 *
 *  @return 高斯模糊图片
 */
+ (UIImage *)nox_blurImage:(UIImage *)image blur:(CGFloat)blur;

//加模糊效果，image是图片，blur是模糊度
+(UIImage *)blurryImage:(UIImage *)image withBlurLevel:(CGFloat)blur;
//获取启动图
+ (UIImage *)launchImage;
//获取图片色调
-(UIColor*)mostColor;
@end
