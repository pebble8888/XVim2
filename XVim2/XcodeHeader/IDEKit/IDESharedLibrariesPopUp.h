//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTPopoverContentViewController.h>

@class DVTBorderedView, IDEDebugSession, NSArray, NSArrayController, NSURL;

@interface IDESharedLibrariesPopUp : DVTPopoverContentViewController
{
    id _modulesObservingToken;
    NSArrayController *_arrayController;
    DVTBorderedView *_glassBar;
    NSArray *_sharedLibraryEntries;
    IDEDebugSession *_debugSession;
    NSURL *_URL;
}

+ (void)showPopUpAtPoint:(struct CGPoint)arg1 relativeToView:(id)arg2 debugSession:(id)arg3 executableURL:(id)arg4;
- (void).cxx_destruct;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
@property(retain) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(retain) NSArray *sharedLibraryEntries; // @synthesize sharedLibraryEntries=_sharedLibraryEntries;
- (void)primitiveInvalidate;
- (void)copy:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)_handleCodeModulesChanged:(id)arg1;
- (void)_handleDebugSessionStateChanged:(id)arg1;
- (void)_cleanUpAfterClosingPopUpWindow;
- (void)done:(id)arg1;
- (void)_showPopUpAtPoint:(struct CGPoint)arg1 relativeToView:(id)arg2;
- (void)loadView;
- (id)_initWithDebugSession:(id)arg1 executableURL:(id)arg2;

@end

