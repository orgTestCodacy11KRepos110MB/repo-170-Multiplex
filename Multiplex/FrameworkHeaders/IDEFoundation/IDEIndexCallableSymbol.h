//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEFoundation/IDEIndexSymbol.h>

@class IDEIndexContainerSymbol;

@interface IDEIndexCallableSymbol : IDEIndexSymbol
{
    IDEIndexContainerSymbol *_containerSymbol;
}

- (id)callsCancelWhen:(dispatch_block_t)arg1;
- (id)calls;
- (id)typeOfArgument:(unsigned long long)arg1;
- (unsigned long long)numArguments;
- (id)returnType;
- (id)property;
- (id)overridingSymbols;
- (id)overriddenSymbols;
- (void)setContainerSymbol:(id)arg1;
- (id)containerSymbol;

@end

