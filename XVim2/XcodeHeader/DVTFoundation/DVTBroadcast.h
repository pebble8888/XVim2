//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol DVTBroadcastName;

@interface DVTBroadcast : NSObject
{
    id _source;
    id <DVTBroadcastName> _name;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) id <DVTBroadcastName> name; // @synthesize name=_name;
@property(readonly) id source; // @synthesize source=_source;
- (id)initWithSource:(id)arg1 name:(id)arg2 userInfo:(id)arg3;

@end

