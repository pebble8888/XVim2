//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTURLMatch : NSObject
{
    struct _NSRange _range;
    NSString *_url;
}

- (void).cxx_destruct;
@property(copy) NSString *url; // @synthesize url=_url;
@property struct _NSRange range; // @synthesize range=_range;
- (id)description;
- (id)init;
- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2;

@end

