//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, NSPopUpButton, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDETeamPicker : IDEViewController
{
    DVTObservingToken *_teamObserver;
    id <IDEProvisioningBasicTeam> _team;
    NSPopUpButton *_teamPopUp;
    NSString *_pickerReason;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pickerReason; // @synthesize pickerReason=_pickerReason;
@property(retain, nonatomic) NSPopUpButton *teamPopUp; // @synthesize teamPopUp=_teamPopUp;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
- (void)select:(id)arg1;
- (void)cancel:(id)arg1;
- (void)beginSheetModalForWindow:(id)arg1 pickerReason:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addAccount:(id)arg1;
- (void)selectTeam:(id)arg1;
- (void)_reloadTeams;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

@end

