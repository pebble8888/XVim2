//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTVersion : NSObject <NSCopying>
{
    CDUnion_7de6e739 _components;
    NSString *_stringValue;
    NSString *_buildNumber;
}

+ (id)userRepresentationOfVersion:(id)arg1 build:(id)arg2;
+ (id)currentDarwinVersion;
+ (id)currentiOSSupportSystemVersion;
+ (id)currentSystemVersion;
+ (id)versionWithStringValue:(id)arg1;
+ (id)versionWithStringValue:(id)arg1 buildNumber:(id)arg2;
+ (id)versionWithMajorComponent:(unsigned long long)arg1 minorComponent:(unsigned long long)arg2 updateComponent:(unsigned long long)arg3;
+ (id)versionWithAvailabilityForm:(unsigned long long)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
- (unsigned long long)availabilityFormIncludingUpdate:(BOOL)arg1 shortForm:(BOOL)arg2;
- (unsigned long long)availabilityFormIncludingUpdate:(BOOL)arg1;
- (id)initWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToOrNewerThanVersion:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *stringValueWithBuildNumber;
@property(readonly, copy) NSString *stringValueTrimmingAllZeroes;
@property(readonly, copy) NSString *stringValue;
@property(readonly) unsigned long long updateComponent;
@property(readonly) unsigned long long minorComponent;
@property(readonly) unsigned long long majorComponent;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithVersionComponents:(CDUnion_7de6e739)arg1 buildNumber:(id)arg2;

@end

