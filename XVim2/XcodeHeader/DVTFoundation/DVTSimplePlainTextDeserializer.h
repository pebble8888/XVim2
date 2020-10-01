//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTSimpleDeserializer.h>

@class NSMutableArray;

@interface DVTSimplePlainTextDeserializer : DVTSimpleDeserializer
{
    NSMutableArray *_knownClasses;
    unsigned long long _streamFormatVersion;
}

- (void).cxx_destruct;
@property unsigned long long streamFormatVersion; // @synthesize streamFormatVersion=_streamFormatVersion;
- (id)decodeObjectList;
- (id)decodeObject;
- (id)decodeString;
- (double)decodeDouble;
- (float)decodeFloat;
- (void)decodeHexBytes:(void *)arg1 length:(unsigned long long)arg2 magic:(BOOL)arg3;
- (unsigned long long)decodeInteger;
- (id)init;
- (id)initWithData:(id)arg1;

@end

