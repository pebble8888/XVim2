//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTPlistArrayNode.h>

@class NSMutableDictionary;

@interface DVTPlistDictionaryNode : DVTPlistArrayNode
{
    NSMutableDictionary *_dict;
}

- (void).cxx_destruct;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 startingAt:(id)arg3 document:(id)arg4;
- (id)_findStringInKey:(id)arg1 matchingDescriptor:(id)arg2 backwards:(BOOL)arg3 startingAt:(id)arg4 document:(id)arg5;
- (id)keyForChild:(id)arg1;
- (unsigned long long)indexOfKey:(id)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (id)keyForNewChild;
- (id)keyByUniquingKey:(id)arg1;
- (void)setValueFromPlist:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceKeyAtIndex:(unsigned long long)arg1 withKey:(id)arg2;
- (void)replaceValue:(id)arg1 forKey:(id)arg2;
- (void)removeValueForKey:(id)arg1;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)addValue:(id)arg1 forKey:(id)arg2;
- (void)insertValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParentNode:(id)arg1;

@end

