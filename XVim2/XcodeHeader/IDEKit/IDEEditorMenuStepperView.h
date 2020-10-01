//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorStepperView.h>

@class IDEActionButton;
@protocol IDEEditorMenuStepperViewDelegate;

@interface IDEEditorMenuStepperView : IDEEditorStepperView
{
    IDEActionButton *_actionButton;
    id <IDEEditorMenuStepperViewDelegate> _delegate;
}

+ (id)keyPathsForValuesAffectingCanMove;
- (void).cxx_destruct;
@property(retain) id <IDEEditorMenuStepperViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)primitiveInvalidate;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (BOOL)canMove;
- (id)menuForActionButton;
- (struct CGSize)centerViewSizeInHeight:(double)arg1;
- (id)newCenterView;
- (id)_toolTipForRightArrow;
- (id)_toolTipForLeftArrow;
- (void)setImage:(id)arg1;

@end

