//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDENavigableItemAsyncFilteringCoordinator.h>

@class NSMapTable;

@interface IDENavigableItemUniquingAsyncFilteringCoordinator : IDENavigableItemAsyncFilteringCoordinator
{
    NSMapTable *_weakRepresentedObjectsToNavigableItems;
}

- (void).cxx_destruct;
- (void)_forgetItems:(id)arg1;
- (void)_performFilterEvaluationOfRepresentedObject:(id)arg1;
- (void)_performFilterEvaluationOfItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

@end

