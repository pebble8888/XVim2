//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceTextView;

@interface DVTSourceTextSelectionAccessibilityProxy : NSObject
{
    DVTSourceTextView *_parent;
}

- (void).cxx_destruct;
@property(readonly) DVTSourceTextView *parent; // @synthesize parent=_parent;
- (id)accessibilityChildren;
- (BOOL)accessibilityFocused;
- (id)accessibilityTitle;
- (id)accessibilityParent;
- (id)accessibilityValue;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityRole;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (id)initWithParent:(id)arg1;

@end

