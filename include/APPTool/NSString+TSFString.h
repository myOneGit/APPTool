//
//  NSString+TSFString.h
//  Tool
//
//  Created by 积分宝 on 16/8/18.
//  Copyright © 2016年 积分宝. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface  NSString (TSFString)
/**
 判断一个字符串是否为空，如果为空赋一个初值
 */
-(NSString *)checkStringIsNullWithNullString:(NSString *)string;



/**
 固定宽度计算文本高度  MAXWith（固定宽度）  MAXHeight （最大高度） textFont（字体大小）
 */
- (CGSize)boundingRectWithTextMAXWith:(float)MAXWith AndHeight:(float)MAXHeight AndFont:(CGFloat)textFont;




/**
 简单计算文本宽度
 */
-(CGSize)alertINtegralLWith:(CGFloat)stringFont;




/**
 字符串指定某个字符颜色改变
 */
-(NSMutableAttributedString *)alterTypefaceColor:(NSString *)text AndColor:(UIColor *)color;




/**
改变指定字符串某个自负字体大小
 */
-(NSMutableAttributedString *)alterTypefaceFontSize:(NSString *)text AndColor:(CGFloat)font;




/**
 将字符串其中一部分隐藏为***
 */
-(NSString *)transformToStarStringWithString:(NSString *)normalString;




/**
判断是否为纯数字  YES 纯数字  NO 不是
 */
- (BOOL)isPureInt;




/**
 *@brief 银行卡输入，textField4位加空格，16个数字后还能添加14位数字
 */
- (NSString *)addSpacingToLabelWithString;




/**
 *判断是否为手机号码
 */
-(BOOL)validatePhone;

/**
 *判断是否纯空格
 */
+(BOOL)isEmpty:(NSString *)str;

/**
 *判断是否为邮箱
 */
-(BOOL)isEmail;


/**
 *  取小数点后几位 
 *  position位数
 *  price字符
 */
+(NSString *)notRounding:(float)price afterPoint:(int)position;



/*
 *计算版本好数字之和
 */
+(NSInteger)calculateVersions:(NSString *)versions;

/*
 *字典转json
 */
+ (NSString*)dictionaryToJson:(NSDictionary *)data;

/*
 *获取ip地址
 */
+(NSString *)getIpAddresses;

/*
 *转base64
 */
+ (NSString *)base64StringFromText:(NSString *)text;


/*
 *修改字符串其中某个字符的颜色字体大小
 text 需要修改的字符
 color 颜色
 font 字体大小
 */
-(NSMutableAttributedString *)alterTypefaceColor:(NSString *)text AndColor:(UIColor *)color AndFont:(CGFloat)font;

/**
 改变指定字符串某个自负字体大小并加粗
 */
-(NSMutableAttributedString *)boldAlterTypefaceFontBoldSize:(NSString *)text AndColor:(CGFloat)font;

/*
 *移除系统表情
 */
+(NSString *) stringContainsEmoji:(NSString *)string;

/*
 *RSA加密返回
 */
+(NSString *)rsaText:(NSString *)text;

/*
 *MD5大
 */
- (NSString*)md532BitLower;

/*
 *MD5小
 */
- (NSString*)md532BitUpper;

/*
 *字母转大写
 */
+(NSString *)toUpper:(NSString *)str;

/*
 *如果是空字符则返回 “”
 */
+(NSString *)getNONULLString:(id )noNUll;
/*
 *保留两位小数
 */
+(NSString *)getFloatString:(id)string;
+(NSString *)getIntString:(id)string1;
+(BOOL)isTelphoneNumber:(NSString *)telNum;

/*
 检测html中手机号时候驱除空格和-等特殊输入
 */
-(NSString *)removeBlankLinefeed;

/*
 经纬度
 */
+(NSString *)getLongitude;

/*
 经纬度
 */
+(NSString*)getLatitude;
/*
 返回距离格式
 */
+(NSString *)getDistance:(NSString *)distance;
- (CGSize)stringSizeWithFont:(UIFont *)font Size:(CGSize)size;
/** 拨打手机号 */
+(void)callPhone:(NSString *)phone;

/**手机号隐藏*/
+(NSString *)numberSuitScanf:(NSString*)number;

/** 字符串转字典 */
+ (NSMutableDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
+(NSAttributedString *)attachmentWithFontSize:(CGFloat)fontSize image:(UIImage *)image shrink:(BOOL)shrink;
-(NSString *)timeStampTurnRecentlyTime;
-(NSString *)removesEscapeSymbol;
@end
