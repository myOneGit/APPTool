//
//  CHWeakScriptMessageDelegate.h
//  HangZhouTravel
//
//  Created by 吴高翔 on 2018/11/13.
//  Copyright © 2018年 wangzhongliang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WKScriptMessageHandler.h>

NS_ASSUME_NONNULL_BEGIN

@interface CHWeakScriptMessageDelegate : NSObject <WKScriptMessageHandler>
@property (nonatomic, weak) id<WKScriptMessageHandler> scriptDelegate;
- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate;
@end

NS_ASSUME_NONNULL_END
