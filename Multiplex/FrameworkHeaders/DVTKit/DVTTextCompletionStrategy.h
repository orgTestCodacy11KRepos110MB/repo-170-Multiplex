//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@interface DVTTextCompletionStrategy : NSObject
{
}

+ (dispatch_block_t)priorityComparator;
- (id)bestMatchForPrefix:(id)arg1 inCompletionItems:(id)arg2 withContext:(id)arg3;
- (id)additionalCompletionItemsForDocumentLocation:(id)arg1 context:(id)arg2;
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (void)prepareForDocumentLocation:(id)arg1 context:(id)arg2;

@end

