//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class IDEEditorHistoryStack, NSArray;

@interface IDEEditorContents : NSObject
{
    NSArray *_historyStacks;
    long long _selectedIndex;
}

@property(readonly) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly) NSArray *historyStacks; // @synthesize historyStacks=_historyStacks;
- (id)description;
@property(readonly) IDEEditorHistoryStack *selectedHistoryStack;
- (id)initWithHistoryStacks:(id)arg1 selectedIndex:(long long)arg2;

@end

