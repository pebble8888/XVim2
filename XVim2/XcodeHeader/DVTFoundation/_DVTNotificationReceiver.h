//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface _DVTNotificationReceiver : NSObject
{
    SEL _selector;
    BOOL _registeredWithBlock;
    DVTStackBacktrace *_creationBacktrace;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isCancelled;
    id _observer;
    NSOperationQueue *_queue;
    NSString *_notificationName;
    CDUnknownBlockType _block;
}

+ (void)_receiveNotification:(id)arg1 observer:(id)arg2 selector:(SEL)arg3 createHintGenerator:(CDUnknownBlockType)arg4;
+ (void)_recieveNotification:(id)arg1 queue:(id)arg2 creationBacktrace:(id)arg3 createHintGenerator:(CDUnknownBlockType)arg4 block:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
@property SEL selector; // @synthesize selector=_selector;
@property(retain) id observer; // @synthesize observer=_observer;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)receiveNotification:(id)arg1;
- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2;

@end

