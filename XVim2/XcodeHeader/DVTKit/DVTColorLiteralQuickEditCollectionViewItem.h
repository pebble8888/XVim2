//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class DVTColorLiteralQuickEditCollectionViewColorView, NSColor, NSView;

@interface DVTColorLiteralQuickEditCollectionViewItem : NSCollectionViewItem
{
    NSColor *_representedColor;
    NSView *_backgroundView;
    DVTColorLiteralQuickEditCollectionViewColorView *_colorView;
}

+ (id)nibName;
- (void).cxx_destruct;
@property(retain) DVTColorLiteralQuickEditCollectionViewColorView *colorView; // @synthesize colorView=_colorView;
@property(retain) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSColor *representedColor; // @synthesize representedColor=_representedColor;
- (void)viewDidLoad;
- (void)setSelected:(BOOL)arg1;

@end

