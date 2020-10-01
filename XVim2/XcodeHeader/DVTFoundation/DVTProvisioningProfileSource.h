//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTDispatchLock, DVTLogAspect, DVTStackBacktrace, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol DVTProvisioningProfileSourceDelegate, OS_dispatch_queue;

@interface DVTProvisioningProfileSource : NSObject <DVTInvalidation>
{
    NSDictionary *_searchPathToProfilePathCache;
    NSMutableDictionary *_filePathToProfileCache;
    DVTDispatchLock *_processingLock;
    id <DVTProvisioningProfileSourceDelegate> _delegate;
    NSArray *_searchPaths;
    DVTLogAspect *_logAspect;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
}

+ (id)sourceWithSearchPaths:(id)arg1 logAspect:(id)arg2;
+ (id)sourceWithDefaultSearchPathsAndLogAspect:(id)arg1;
+ (id)defaultSearchPathsWithLogAspect:(id)arg1;
+ (id)mobileDeviceSupportSearchPaths;
+ (BOOL)couldBeProvisioningProfile:(id)arg1;
+ (id)providerForProfilePathExtension:(id)arg1;
+ (id)providerForPlatform:(id)arg1;
+ (id)allProviders;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // @synthesize delegateCallbackQueue=_delegateCallbackQueue;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) NSArray *searchPaths; // @synthesize searchPaths=_searchPaths;
@property(retain, nonatomic) id <DVTProvisioningProfileSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)uninstallProfiles:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)installProfiles:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)profileWithData:(id)arg1 platform:(id)arg2 error:(id *)arg3;
- (id)profileWithURL:(id)arg1 error:(id *)arg2;
- (void)_stopObservingFSEvents;
- (void)_startObservingFSEvents;
- (void)_searchPathChanged:(id)arg1;
- (void)_removeInstalledProfiles:(id)arg1;
- (void)_addInstalledProfiles:(id)arg1;
- (id)_profileWithPath:(id)arg1 error:(id *)arg2;
- (id)_profilesFromSearchPath:(id)arg1;
- (id)_profilesFromFilePaths:(id)arg1;
- (id)_profilePathsInSearchPath:(id)arg1;
- (id)_fetchProvisioningProfiles;
- (id)_cachedProfileWithPath:(id)arg1;
- (id)_cachedProfilePathsWithSearcHPath:(id)arg1;
- (void)_uncacheProfilePath:(id)arg1 searchPath:(id)arg2;
- (void)_cacheProfile:(id)arg1 profilePath:(id)arg2 searchPath:(id)arg3;
- (void)_invalidateCaches;
- (id)allProvisioningProfiles;
- (id)initWithSearchPaths:(id)arg1 logAspect:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

