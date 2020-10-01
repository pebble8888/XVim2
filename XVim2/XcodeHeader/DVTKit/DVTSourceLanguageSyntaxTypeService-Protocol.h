//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTSourceLandmarkItem, DVTTextCompletionSession, NSArray, NSDictionary;

@protocol DVTSourceLanguageSyntaxTypeService <NSObject>
- (void)generateLandmarkItemsForParent:(DVTSourceLandmarkItem *)arg1 matchingType:(BOOL (^)(unsigned long long))arg2 altParent:(DVTSourceLandmarkItem *)arg3 matchingAltType:(BOOL (^)(unsigned long long))arg4;
- (struct _NSRange)textCompletionSession:(DVTTextCompletionSession *)arg1 replacementRangeForSuggestedRange:(struct _NSRange)arg2;
- (NSArray *)scopeLanguageSpecificationIdentifiersAtLocation:(unsigned long long)arg1;
- (NSArray *)functionAndMethodRanges;
- (NSArray *)commentBlockRanges;
- (BOOL)isInTokenizableCodeAtLocation:(unsigned long long)arg1;
- (BOOL)isInPlainCodeAtLocation:(unsigned long long)arg1;
- (BOOL)isInKeywordAtLocation:(unsigned long long)arg1;
- (BOOL)isIncompletionPlaceholderAtLocation:(unsigned long long)arg1;
- (BOOL)isInNumberConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInCharacterConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInIdentifierAtLocation:(unsigned long long)arg1;
- (BOOL)isInStringConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInIncludeStatementAtLocation:(unsigned long long)arg1;
- (BOOL)isInPreprocessorStatementAtLocation:(unsigned long long)arg1;
- (BOOL)isInDocCommentAtLocation:(unsigned long long)arg1;
- (BOOL)isInCommentAtLocation:(unsigned long long)arg1;
- (long long)syntaxTypeAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 context:(NSDictionary *)arg3;
@end

