//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionOptionCheckboxViewController.h>

@class IDEDistributionOptionUploadBitcodeState, NSError;

@interface IDEDistributionOptionUploadBitcodeViewController : IDEDistributionOptionCheckboxViewController
{
    IDEDistributionOptionUploadBitcodeState *_state;
    NSError *_stateError;
}

+ (id)keyPathsForValuesAffectingCheckboxValue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *stateError; // @synthesize stateError=_stateError;
@property(retain, nonatomic) IDEDistributionOptionUploadBitcodeState *state; // @synthesize state=_state;
- (id)loadContent;
- (void)setCheckboxValue:(BOOL)arg1;
- (BOOL)checkboxValue;
- (id)checkboxTitle;
- (BOOL)checkboxEnabled;
- (id)checkboxDescription;
- (BOOL)needsInteraction;
- (id)initWithOption:(id)arg1;

@end

