//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTFilterExpression.h>

#import <DVTFoundation/NSCopying-Protocol.h>
#import <DVTFoundation/NSSecureCoding-Protocol.h>

@interface DVTNumericalFilterExpression : DVTFilterExpression <NSCopying, NSSecureCoding>
{
    unsigned long long _comparison;
    double _doubleValue;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(readonly) unsigned long long comparison; // @synthesize comparison=_comparison;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 comparison:(unsigned long long)arg2 doubleValue:(double)arg3 isNegation:(BOOL)arg4;
- (id)initWithIdentifier:(id)arg1 comparison:(unsigned long long)arg2 doubleValue:(double)arg3;

@end

