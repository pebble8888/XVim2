//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface DVTTransactionScope : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionBlocks;
    BOOL _isPerformingTransaction;
    NSString *_identifier;
    DVTStackBacktrace *_topLevelTransactionBacktrace;
    CDUnknownBlockType _multipleTopLevelTransactionsPerEventBlock;
    CDUnknownBlockType _addedCompletionBlocksDuringTransactionBlock;
}

+ (id)transactionScopeWithQueue:(id)arg1 identifier:(id)arg2;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType addedCompletionBlocksDuringTransactionBlock; // @synthesize addedCompletionBlocksDuringTransactionBlock=_addedCompletionBlocksDuringTransactionBlock;
@property(copy) CDUnknownBlockType multipleTopLevelTransactionsPerEventBlock; // @synthesize multipleTopLevelTransactionsPerEventBlock=_multipleTopLevelTransactionsPerEventBlock;
@property(retain) DVTStackBacktrace *topLevelTransactionBacktrace; // @synthesize topLevelTransactionBacktrace=_topLevelTransactionBacktrace;
@property(nonatomic) BOOL isPerformingTransaction; // @synthesize isPerformingTransaction=_isPerformingTransaction;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)addTransactionCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2;

@end

