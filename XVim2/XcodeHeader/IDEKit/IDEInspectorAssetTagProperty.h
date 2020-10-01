//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEKit/IDETextFieldActionFilterDelegate-Protocol.h>

@class IDEInspectorKeyPath, NSSet, NSString, NSTokenField;

@interface IDEInspectorAssetTagProperty : IDEInspectorProperty <IDETextFieldActionFilterDelegate>
{
    NSString *_explicitPlaceholder;
    IDEInspectorKeyPath *_explicitPlaceholderKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_implicitTagsKeyPath;
    IDEInspectorKeyPath *_knownTagsKeyPath;
    IDEInspectorKeyPath *_canHaveAssetTagsKeyPath;
    NSSet *_allEffectiveTags;
    NSSet *_knownTags;
    NSTokenField *_tokenField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTokenField *tokenField; // @synthesize tokenField=_tokenField;
- (void)applyTagToAllItems:(id)arg1;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)toolTipManager:(id)arg1 toolTipForView:(id)arg2 location:(struct CGPoint)arg3 tipSourceRect:(struct CGRect *)arg4 maximumWidth:(double *)arg5;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)unionOfTagSets:(id)arg1;
- (void)enumerateTagSets:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

