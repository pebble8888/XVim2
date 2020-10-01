//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTObservingToken, DVTTabChooserView, DVTTextPreferences, NSPopUpButton, NSTabView, NSTextField;

@interface IDETextEditingPrefsPaneController : IDEViewController
{
    NSPopUpButton *_encodingsPopup;
    DVTBorderedView *_textEditingBorderView;
    DVTTabChooserView *_tabChooserView;
    NSTabView *_tabView;
    DVTObservingToken *_selectedTabObserver;
    NSPopUpButton *_editorOverscrollPopUp;
    NSTextField *_tabWidthField;
    NSTextField *_indentWidthField;
    NSTextField *_braceIndentWidthField;
    NSTextField *_wrappedLinesIndentWidthField;
    NSTextField *_pageGuideLocationField;
    NSTextField *_autoHighlightTokensDelayField;
}

+ (void)initialize;
- (void).cxx_destruct;
@property __weak NSTextField *autoHighlightTokensDelayField; // @synthesize autoHighlightTokensDelayField=_autoHighlightTokensDelayField;
@property __weak NSTextField *pageGuideLocationField; // @synthesize pageGuideLocationField=_pageGuideLocationField;
@property __weak NSTextField *wrappedLinesIndentWidthField; // @synthesize wrappedLinesIndentWidthField=_wrappedLinesIndentWidthField;
@property __weak NSTextField *braceIndentWidthField; // @synthesize braceIndentWidthField=_braceIndentWidthField;
@property __weak NSTextField *indentWidthField; // @synthesize indentWidthField=_indentWidthField;
@property __weak NSTextField *tabWidthField; // @synthesize tabWidthField=_tabWidthField;
@property __weak NSPopUpButton *editorOverscrollPopUp; // @synthesize editorOverscrollPopUp=_editorOverscrollPopUp;
- (void)editorOverscrollChanged:(id)arg1;
- (void)autoHighlightDelayChanged:(id)arg1;
- (void)pageGuideLocationChanged:(id)arg1;
- (void)wrappedLinesIndentChanged:(id)arg1;
- (void)branceIndentChanged:(id)arg1;
- (void)indentWidthChanged:(id)arg1;
- (void)tabWidthChanged:(id)arg1;
@property BOOL autoIndentReturnCharacter;
@property BOOL autoIndentPeriodCharacter;
@property BOOL autoIndentPoundCharacter;
@property BOOL autoIndentColonCharacter;
@property BOOL autoIndentSemiColonCharacter;
@property BOOL autoIndentCloseBraceCharacter;
@property BOOL autoIndentOpenBraceCharacter;
- (void)_setAutoIndent:(BOOL)arg1 forCharacter:(unsigned short)arg2;
@property(readonly) DVTTextPreferences *textPreferences;
- (void)_initTabChooserView;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)awakeFromNib;

@end

