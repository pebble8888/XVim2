//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTCompoundFilterExpression, NSSet;

@protocol DVTFilterSession
- (void)setMatches:(NSSet *)arg1;
@property(nonatomic, readonly) DVTCompoundFilterExpression *filterExpression;
@property(nonatomic) long long filterProgress;
@property(nonatomic, readonly) BOOL isCancelled;
@end

