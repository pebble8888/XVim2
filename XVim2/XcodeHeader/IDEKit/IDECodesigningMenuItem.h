//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSMenuItem.h>

@class NSArray;

@interface IDECodesigningMenuItem : NSMenuItem
{
    NSArray *_observingTokens;
    NSMenuItem *_useProjectSettingsMenuItem;
    NSMenuItem *_useAdHocSigningMenuItem;
    NSMenuItem *_overrideForAppleEngineeringMenuItem;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_selectOption:(id)arg1;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;

@end

