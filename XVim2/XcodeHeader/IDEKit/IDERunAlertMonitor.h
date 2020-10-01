//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEWorkspaceTabController, NSString;

@interface IDERunAlertMonitor : NSObject <DVTInvalidation>
{
    IDEWorkspaceTabController *_workspaceTabController;
    id _currentLaunchSessionStateNotificationObserver;
    id _currentLaunchSessionTargetOutputNotificationObserver;
    id _pgoGenerationSucceededNotificationObserver;
    id _pgoGenerationFailedNotificationObserver;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)executionComplete;
- (void)executionStart;
- (void)_setHasDeterminedOutput:(id)arg1;
- (BOOL)_hasDeterminedOutput;
- (void)_setHasDoneExecutionStopped;
- (BOOL)_hasDoneExecutionStopped;
- (void)_setHasDoneExecutionStarted;
- (BOOL)_hasDoneExecutionStarted;
- (void)_runEvent:(id)arg1 inWorkspace:(id)arg2 modifyContext:(id)arg3;
- (void)_targetOutputStateChanged;
- (BOOL)_targetHasOutput:(id)arg1;
- (id)_createInternalHideIfNoOutputAlertForRunCompleteEvent:(id)arg1;
- (id)initWithWorkspaceTabController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

