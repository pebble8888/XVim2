//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDESchemeActionsInvocationRecord, IDEWorkspace, NSArray, NSString;

@protocol IDETestReport_RootObject <NSObject>
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_supportsDurationColumn;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_attachmentsHaveBeenPruned;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_canRevealActivityAssetsLocally;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_perfMetricNames;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_devices;
@property(readonly, copy, nonatomic) NSString *ide_testReport_rootObject_identifier;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_allTestClasses;
- (BOOL)ide_testReport_shouldEnableBaselineUpdatingUIForWorkspace:(IDEWorkspace *)arg1;

@optional
@property(readonly, nonatomic) double ide_testReport_rootObject_duration;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_rootObject_schemeActionsInvocationRecord;
@end

