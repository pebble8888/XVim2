//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

//#import <DVTFoundation/NSObject-Protocol.h>
#import <Foundation/Foundation.h>

@class NSString;

@protocol DVTStringRepresentationPersistable <NSObject>
- (NSString *)dvt_persistableStringRepresentation;
- (id)dvt_initFromPersistableStringRepresentation:(NSString *)arg1 error:(out id *)arg2;
@end

