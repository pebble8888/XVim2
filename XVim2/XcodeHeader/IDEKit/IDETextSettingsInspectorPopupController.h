//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class NSPopUpButton;

@interface IDETextSettingsInspectorPopupController : IDEInspectorProperty
{
    NSPopUpButton *_popup;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)showValueItemWithRepresentedObject:(id)arg1;
- (void)showValueItem:(id)arg1;
- (void)showMarkerItemWithTitle:(id)arg1 enable:(BOOL)arg2;
- (id)inspectorController;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

