//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTTableViewDelegate-Protocol.h>
#import <IDEKit/IDEDistributionStepInterstitialViewController-Protocol.h>
#import <IDEKit/NSTableViewDataSource-Protocol.h>

@class DVTTableView, IDEDistributionLogging, NSArray, NSError, NSImageView, NSString, NSTabView, NSTextField;

@interface IDEDistributionSigningAssetErrorsViewController : IDEViewController <NSTableViewDataSource, DVTTableViewDelegate, IDEDistributionStepInterstitialViewController>
{
    NSArray *_errors;
    NSString *_errorMessage;
    IDEDistributionLogging *_logging;
    NSTabView *_tabView;
    DVTTableView *_errorTable;
    NSImageView *_imageView;
    NSTextField *_multipleErrorMessageField;
}

+ (id)errorStringForError:(id)arg1 withIcon:(BOOL)arg2 additionalIndent:(double)arg3;
+ (id)stringWithTitle:(id)arg1 subTitle:(id)arg2 icon:(id)arg3 additionalIndent:(double)arg4;
+ (id)keyPathsForValuesAffectingOnlyError;
+ (id)keyPathsForValuesAffectingAdditionalActionTitle;
- (void).cxx_destruct;
@property(retain) NSTextField *multipleErrorMessageField; // @synthesize multipleErrorMessageField=_multipleErrorMessageField;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) DVTTableView *errorTable; // @synthesize errorTable=_errorTable;
@property(retain) NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain) IDEDistributionLogging *logging; // @synthesize logging=_logging;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)copy:(id)arg1;
@property(readonly, nonatomic) NSError *onlyError;
- (void)takeAdditionalAction;
@property(readonly, nonatomic) NSString *additionalActionTitle;
@property(readonly, nonatomic) BOOL canGoNext;
- (void)loadView;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

