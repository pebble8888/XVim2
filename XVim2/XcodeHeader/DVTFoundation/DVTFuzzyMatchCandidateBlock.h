//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSSecureCoding-Protocol.h>

@interface DVTFuzzyMatchCandidateBlock : NSObject <NSSecureCoding>
{
    unsigned long long _count;
    struct DVTFuzzyMatchCandidate *_firstEntry;
}

+ (BOOL)supportsSecureCoding;
- (unsigned long long)count;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCandidateBlock:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)initWithStrings:(id)arg1 indexedFlags:(unsigned long long)arg2;
- (id)initWithFilePaths:(id)arg1 indexedFlags:(unsigned long long)arg2;
- (id)initWithUTF8Strings:(const char **)arg1 lengths:(const long long *)arg2 count:(long long)arg3 indexedFlags:(unsigned long long)arg4;

@end

