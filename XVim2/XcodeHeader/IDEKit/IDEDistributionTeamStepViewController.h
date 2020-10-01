//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTObservingToken, NSImageView, NSPopUpButton, NSString, NSTextField;

@interface IDEDistributionTeamStepViewController : IDEDistributionStepViewController
{
    NSString *_teamError;
    NSPopUpButton *_teamPopUp;
    NSImageView *_errorImage;
    NSTextField *_errorLabel;
    DVTObservingToken *_teamsObserver;
}

+ (id)keyPathsForValuesAffectingTeamError;
+ (id)keyPathsForValuesAffectingCanGoNext;
+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(long long)arg2;
- (void).cxx_destruct;
@property(retain) DVTObservingToken *teamsObserver; // @synthesize teamsObserver=_teamsObserver;
@property(retain) NSTextField *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain) NSImageView *errorImage; // @synthesize errorImage=_errorImage;
@property(retain) NSPopUpButton *teamPopUp; // @synthesize teamPopUp=_teamPopUp;
- (void)addAccount:(id)arg1;
- (void)teamSelected:(id)arg1;
@property(readonly, nonatomic) NSString *teamError; // @synthesize teamError=_teamError;
- (BOOL)allowFreeTeams;
- (void)_reloadPopUpContents;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (BOOL)canGoNext;
- (id)title;
- (void)viewDidInstall;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;

@end

