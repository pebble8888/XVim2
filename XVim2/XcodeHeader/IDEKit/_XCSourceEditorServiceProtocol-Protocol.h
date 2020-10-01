//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@protocol _XCSourceEditorServiceProtocol <NSObject>
- (void)cancelCommandInvocation:(NSUUID *)arg1 reply:(void (^)(void))arg2;
- (void)performCommandInvocation:(NSUUID *)arg1 commandIdentifier:(NSString *)arg2 request:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *))arg4;
- (void)getCommandDefinitions:(void (^)(NSArray *))arg1;
- (void)extensionDidFinishLaunching:(void (^)(void))arg1;
@end

