//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, _TtC13IDEFoundation26SigningEditorConfiguration;

@interface _TtC6IDEKit47SigningEditorConfiguratonsScopeBarButtonManager : NSObject
{
    MISSING_TYPE *buttons;
    MISSING_TYPE *delegate;
    MISSING_TYPE *provider;
    MISSING_TYPE *selectedConfigurationCache;
    MISSING_TYPE *isRestoringSelection;
    MISSING_TYPE *configurationManagerSubscription;
    MISSING_TYPE *configurationManagerProviderSubscription;
    MISSING_TYPE *projectName;
    MISSING_TYPE *selectedConfiguration;
    MISSING_TYPE *configurations;
    MISSING_TYPE *signingEditorConfigurationManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)clickedWithButton:(id)arg1;
- (void)dealloc;
@property(nonatomic, copy) NSArray *configurations;
@property(nonatomic, retain) _TtC13IDEFoundation26SigningEditorConfiguration *selectedConfiguration; // @synthesize selectedConfiguration;

@end

