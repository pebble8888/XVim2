//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSet.h>

@interface NSSet (DVTNSSetAdditions)
- (id)dvt_objectByFoldingWithBlock:(CDUnknownBlockType)arg1;
- (id)dvt_dictionaryWithEntriesAsValuesAndKeysFromBlock:(CDUnknownBlockType)arg1;
- (id)dvt_dictionaryWithEntriesAsKeysAndValuesFromBlock:(CDUnknownBlockType)arg1;
- (id)dvt_sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)dvt_sortedArrayUsingSelector:(SEL)arg1;
- (id)dvt_sortedArray;
- (id)dvt_onlyObject;
- (BOOL)dvt_isNonEmpty;
- (id)dvt_objectsPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)dvt_areAllObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_anyObjectPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)dvt_areAnyObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_setByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingBlockStrictly:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingSelector:(SEL)arg1;
- (id)dvt_setByRemovingObject:(id)arg1;
- (id)dvt_setBySubtractingSet:(id)arg1;
- (id)dvt_setByIntersectingSet:(id)arg1;
- (Class)dvt_mutableClass;
@end

