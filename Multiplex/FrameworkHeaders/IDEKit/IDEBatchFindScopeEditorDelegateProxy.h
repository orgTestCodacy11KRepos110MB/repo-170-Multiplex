//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "IDEBatchFindRuleEditorDelegate-Protocol.h"
#import "IDEBatchFindScopeRuleRowDelegate-Protocol.h"

@class IDEBatchFindScopeEditor, NSString;

@interface IDEBatchFindScopeEditorDelegateProxy : NSObject <IDEBatchFindScopeRuleRowDelegate, IDEBatchFindRuleEditorDelegate>
{
    IDEBatchFindScopeEditor *_scopeEditor;
}

@property(retain) IDEBatchFindScopeEditor *scopeEditor; // @synthesize scopeEditor=_scopeEditor;
- (id)ruleEditor:(id)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3;
- (id)ruleEditor:(id)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4;
- (long long)ruleEditor:(id)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3;
- (BOOL)ruleEditor:(id)arg1 shouldAddRowOfType:(unsigned long long)arg2;
- (void)ruleRow:(id)arg1 changedDisplayValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

