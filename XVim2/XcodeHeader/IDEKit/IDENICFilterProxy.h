//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDENavigableItem.h>

@class NSHashTable;

@interface IDENICFilterProxy : IDENavigableItem
{
    NSHashTable *_rootItems;
}

- (void).cxx_destruct;
@property(readonly) NSHashTable *rootItems; // @synthesize rootItems=_rootItems;
- (BOOL)_alwaysBypassFilter;
- (id)_childItems;
- (id)childItems;
- (BOOL)isLeaf;
- (id)description;
- (void)_setItems:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;

@end

