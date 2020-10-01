//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class IDEMediaLibraryController, IDEMediaResourceVariantContext, IDEMediaResourceVariantSet, NSArray, NSDictionary, NSPasteboard;

@protocol IDEMediaLibraryDelegate <NSObject>

@optional
- (NSDictionary *)mediaLibraryController:(IDEMediaLibraryController *)arg1 dragImagesByStateIdentifierForMediaResourceVariantSet:(IDEMediaResourceVariantSet *)arg2;
- (void)mediaLibraryController:(IDEMediaLibraryController *)arg1 populatePasteboard:(NSPasteboard *)arg2 withMediaResourceVariantSets:(NSArray *)arg3;
- (BOOL)mediaLibraryController:(IDEMediaLibraryController *)arg1 variantSetIsSystemProvided:(IDEMediaResourceVariantSet *)arg2;
@property(nonatomic, readonly) NSDictionary *variantForResolvingMediaResources;
@property(nonatomic, readonly) IDEMediaResourceVariantContext *variantContextForMediaLibrary;
@end

