//
//  WeekMessageHandelWebView.h
//  HangZhouTravel
//
//  Created by 吴高翔 on 2019/1/25.
//  Copyright © 2019年 wangzhongliang. All rights reserved.
//

#import <WebKit/WebKit.h>
#import "CHWeakScriptMessageDelegate.h"
NS_ASSUME_NONNULL_BEGIN
@interface CHWeekMessageHandelWebView : WKWebView
// 解决messagehandle 强引用导致控制器不释放的问题
- (void)addScriptMessageHandler:(CHWeakScriptMessageDelegate *)scriptMessageHandler name:(NSString *)name;
@end

NS_ASSUME_NONNULL_END
