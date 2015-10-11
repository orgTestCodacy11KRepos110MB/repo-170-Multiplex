//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDERefactoringInputValidator.h>

@class IDEIndex, IDEIndexSymbol;

@interface IDERefactoringRenameInputValidator : IDERefactoringInputValidator
{
    IDEIndexSymbol *_originalSymbol;
    IDEIndex *_index;
    BOOL _symbolIsGlobal;
}

@property(retain) IDEIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) IDEIndexSymbol *originalSymbol; // @synthesize originalSymbol=_originalSymbol;
- (BOOL)isStringValid:(id)arg1 otherStrings:(id)arg2 localizedMessage:(id *)arg3 invalidRange:(struct _NSRange *)arg4;
- (id)_sameAsExistingSymbolLocalizedMessage;
- (id)_sameAsOriginalLocalizedMessage;

@end
