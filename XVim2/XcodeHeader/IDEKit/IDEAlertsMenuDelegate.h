//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEMenuKeyBindingProvider-Protocol.h>

@class NSString;

@interface IDEAlertsMenuDelegate : NSObject <IDEMenuKeyBindingProvider>
{
}

+ (void)registerMenuKeyBindingsToMenuKeyBindingSet:(id)arg1;
+ (id)_findMenuItemTitled:(id)arg1 inMenu:(id)arg2;
- (void)menuWillOpen:(id)arg1;
- (void)buildMenu:(id)arg1;
- (void)_buildMenu:(id)arg1;
- (void)_keyBindingDidChangeKeyboardShortcuts:(id)arg1;
- (void)performAlertEvent:(id)arg1;
- (void)editAlerts:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

