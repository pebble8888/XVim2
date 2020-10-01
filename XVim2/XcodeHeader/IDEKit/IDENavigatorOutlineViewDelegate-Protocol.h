//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>

@class NSArray, NSCell, NSOutlineView;

@protocol IDENavigatorOutlineViewDelegate <DVTOutlineViewDelegate>

@optional
@property(readonly) BOOL usesSystemGroupHeaderStyle;
- (double)outlineView:(NSOutlineView *)arg1 estimatedHeightOfRowByItem:(id)arg2;
- (struct _NSRange)outlineView:(NSOutlineView *)arg1 initialSelectionRangeForCell:(NSCell *)arg2 proposedRange:(struct _NSRange)arg3;
- (NSArray *)outlineView:(NSOutlineView *)arg1 childItemsForItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldInitiallyExpandItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 isGroupHeaderItem:(id)arg2;
@end

