//
//  TSFRequest.h
//  MyAndroidAPP
//
//  Created by 积分宝 on 16/9/28.
//  Copyright © 2016年 积分宝. All rights reserved.
//
#import <Foundation/Foundation.h>

/// 文件管理类
@interface TSFFileManager : NSObject



/// 把对象归档存到沙盒里
+(void)saveObject:(id)object byFileName:(NSString*)fileName;
/// 通过文件名从沙盒中找到归档的对象
+(id)getObjectByFileName:(NSString*)fileName;

/// 根据文件名删除沙盒中的 plist 文件
+(void)removeFileByFileName:(NSString*)fileName;

/// 存储用户偏好设置 到 NSUserDefults
+(void)saveUserData:(id)data forKey:(NSString*)key;

/// 读取用户偏好设置
+(id)readUserDataForKey:(NSString*)key;

/// 删除用户偏好设置
+(void)removeUserDataForkey:(NSString*)key;




@end
