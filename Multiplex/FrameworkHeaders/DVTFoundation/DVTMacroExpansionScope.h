//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"


@class DVTMacroDefinitionTable, NSDictionary;

@interface DVTMacroExpansionScope : NSObject <NSCopying>
{
    DVTMacroExpansionScope *_parentScope;
    DVTMacroDefinitionTable *_macroDefnTable;
    NSDictionary *_condParamValues;
    NSDictionary *_allCondParamValues;
    NSDictionary *_condParamFallbackValues;
    NSDictionary *_allCondParamFallbackValues;
    unsigned int _expansionOptions:8;
    unsigned int _defnLevel:8;
    unsigned int _highestDefnLevel:8;
    unsigned int _unused:8;
    int _retainCount;
    id *_nextScopeByDefnLevel;
}

+ (id)newWithParentScope:(id)arg1 macroDefinitionTables:(id)arg2;
+ (id)newWithParentScope:(id)arg1 macroDefinitionTables:(id)arg2 conditionParameterValues:(id)arg3;
+ (id)newWithParentScope:(id)arg1 macroDefinitionTables:(id)arg2 conditionParameterValues:(id)arg3 options:(unsigned long long)arg4;
+ (id)newWithParentScope:(id)arg1 definitionLevelsToClear:(id)arg2 macroDefinitionTables:(id)arg3 conditionParameterValues:(id)arg4 options:(unsigned long long)arg5 knownStringMapping:(id)arg6;
+ (id)newWithParentScope:(id)arg1 macros:(id)arg2 definitionLevel:(long long)arg3;
+ (id)newWithParentScope:(id)arg1 macros:(id)arg2 definitionLevel:(long long)arg3 conditionParameterValues:(id)arg4;
+ (id)newWithParentScope:(id)arg1 macros:(id)arg2 definitionLevel:(long long)arg3 conditionParameterValues:(id)arg4 preserveUnresolvedReferences:(BOOL)arg5;
+ (id)stringForDefinitionLevel:(long long)arg1;
+ (id)newWithParentScope:(id)arg1 macroDefinitionTable:(id)arg2 definitionLevel:(unsigned long long)arg3;
+ (id)newWithParentScope:(id)arg1 macroDefinitionTable:(id)arg2 definitionLevel:(unsigned long long)arg3 definitionLevelsToClear:(id)arg4 conditionParameterValues:(id)arg5;
+ (id)newWithParentScope:(id)arg1 macroDefinitionTable:(id)arg2 definitionLevel:(unsigned long long)arg3 definitionLevelsToClear:(id)arg4 conditionParameterValues:(id)arg5 expansionOptions:(unsigned long long)arg6;
+ (id)newWithParentScope:(id)arg1 macroDefinitionTable:(id)arg2 definitionLevel:(unsigned long long)arg3 definitionLevelsToClear:(id)arg4 conditionParameterValues:(id)arg5 conditionParameterFallbackValues:(id)arg6 expansionOptions:(unsigned long long)arg7;
- (void)appendDebugDescriptionToStringBuilder:(struct DVTStringBuilder *)arg1 indent:(unsigned long long)arg2;
- (id)nextScopeForOwnDefinitionLevel;
- (id)scopeByRemovingAllTablesAtDefinitionLevel:(long long)arg1;
- (id)sortedLongDescription;
- (id)longDescriptionInSortedMacroNameOrder;
- (id)longDescriptionInScopeAncestryOrder;
- (id)longDescriptionInMacroLookupOrder;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)appendAdditionalContentToStringBuilder:(struct DVTStringBuilder *)arg1 indent:(unsigned long long)arg2;
- (id)allMacroNames;
- (id)allConditionParameterValues;
- (id)valueForConditionParameter:(id)arg1;
- (long long)definitionLevel;
- (id)macroDefinitionTable;
- (unsigned long long)options;
@property(readonly) BOOL preserveUnresolvedReferences;
- (id)parentScope;
- (id)longDescription;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithParentScope:(id)arg1 macroDefinitionTable:(id)arg2 definitionLevel:(unsigned long long)arg3 definitionLevelsToClear:(id)arg4 conditionParameterValues:(id)arg5 expansionOptions:(unsigned long long)arg6;
- (id)initWithParentScope:(id)arg1 macroDefinitionTable:(id)arg2 definitionLevel:(unsigned long long)arg3 definitionLevelsToClear:(id)arg4 conditionParameterValues:(id)arg5 conditionParameterFallbackValues:(id)arg6 expansionOptions:(unsigned long long)arg7;
- (id)evaluateMacroExpression:(id)arg1 asStringListForLiteralStringValue:(id)arg2;
- (id)evaluateMacroExpression:(id)arg1 asStringForLiteralStringValue:(id)arg2;
- (BOOL)evaluatedBooleanValueForMacroExpression:(id)arg1;
- (id)evaluatedStringListValueForMacroExpression:(id)arg1;
- (id)evaluatedStringValueForMacroExpression:(id)arg1;
- (BOOL)evaluatedBooleanValueForMacroNamed:(id)arg1;
- (id)evaluatedStringListValueForMacroNamed:(id)arg1;
- (id)evaluatedStringValueForMacroNamed:(id)arg1;
- (id)evaluatedStringValueForMacroNamed:(id)arg1 returningFallbackConditionsUsed:(id *)arg2;
- (id)lookupValueForMacroName:(id)arg1 hash:(unsigned int)arg2 withCursor:(struct DVTMacroNameLookupCursor *)arg3;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

