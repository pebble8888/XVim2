//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTokenAttachmentCell.h>

@class DVTTextFold, NSView;

@interface DVTTextFoldInlineTokenAttachmentCell : NSTokenAttachmentCell
{
    NSView *_controlView;
    struct CGRect *_tmpRectArray;
    unsigned long long _tmpRectArrayCount;
    DVTTextFold *_fold;
}

- (void).cxx_destruct;
@property __weak DVTTextFold *fold; // @synthesize fold=_fold;
@property(retain) NSView *controlView; // @synthesize controlView=_controlView;
- (struct CGRect *)rectArrayForCharacterRange:(struct _NSRange)arg1 inRect:(struct CGRect)arg2 rectCount:(unsigned long long *)arg3;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (id)tokenBackgroundColor;
- (id)tokenForegroundColor;
- (long long)interiorBackgroundStyle;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (long long)_typesetterBehavior;
- (void)_updateFontForCurrentTheme;
- (void)_themeColorsChanged:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (void)_stopObservingFontAndColorNotifications;
- (void)_startObservingFontAndColorNotifications;
- (double)_textFoldInlineTokenAttachmentWidthDelta;

@end

