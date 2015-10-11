//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"
#import "IDEInspectorValueElement-Protocol.h"

@class DVTDelayedInvocation, DVTStackBacktrace, NSBundle, NSMutableArray, NSMutableOrderedSet, NSObject<IDEBindableDeclarativeInspectorController>, NSString, NSView, NSXMLElement;

@interface IDEInspectorProperty : NSViewController <IDEInspectorValueElement, DVTInvalidation>
{
    DVTDelayedInvocation *_refreshInvocation;
    NSObject *_inspectorController;
    NSObject *_unvailableInspectorController;
    NSXMLElement *_propertyDefinition;
    NSMutableArray *_tearDownTokens;
    NSMutableArray *_pendingAccessabilityConfigurations;
    NSMutableArray *_textFieldActionFilters;
    NSMutableOrderedSet *_pendingRefreshHandlers;
    BOOL _settingUp;
    BOOL _calledThroughToBaseTeardownMethod;
    BOOL _tiled;
    NSView *_accessoryView;
}

+ (id)prefixObservedKeyPathWithConditionalControllerReference:(id)arg1;
+ (id)prefixKeyPathWithConditionalControllerReference:(id)arg1;
+ (void)initialize;
+ (id)propertyWithDefinition:(id)arg1 andController:(id)arg2;
+ (Class)propertyClassForPropertyDefinition:(id)arg1;
+ (id)inspectorPropertyExtensionForTypeIdentifier:(id)arg1;
+ (id)inspectorPropertyExtensionPoint;
@property(readonly) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain) NSXMLElement *propertyDefinition; // @synthesize propertyDefinition=_propertyDefinition;
@property(retain) NSObject *inspectorController; // @synthesize inspectorController=_inspectorController;
@property(getter=isTiled) BOOL tiled; // @synthesize tiled=_tiled;
- (id)findIndicatorContentViewForInspectedKeyPath:(id)arg1 withContext:(id)arg2;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (id)toolTipManager:(id)arg1 toolTipForView:(id)arg2 location:(struct CGPoint)arg3 tipSourceRect:(struct CGRect *)arg4 maximumWidth:(double *)arg5;
- (void)configureAccessibilityForUIElement:(id)arg1 forAttribute:(id)arg2 withAppendedString:(id)arg3;
- (BOOL)shouldAppplyPendingAccessabilityConfigurations;
- (id)propertyRelativeKeyPathForAttributeNamed:(id)arg1;
- (BOOL)hasAttributeValueNamed:(id)arg1;
- (SEL)selectorAttributeValueNamed:(id)arg1 defaultValue:(SEL)arg2;
- (float)floatAttributeValueNamed:(id)arg1 defaultValue:(float)arg2;
- (double)doubleAttributeValueNamed:(id)arg1 defaultValue:(double)arg2;
- (id)localizedStringAttributeValueNamed:(id)arg1 forElement:(id)arg2 defaultValue:(id)arg3;
- (id)localizedStringAttributeValueNamed:(id)arg1 defaultValue:(id)arg2;
- (id)localizedStringForKey:(id)arg1;
- (id)stringAttributeValueNamed:(id)arg1 defaultValue:(id)arg2;
- (id)auxiliaryKeyPathForAttributeValueNamed:(id)arg1 defaultValue:(id)arg2;
- (id)colorForAttributeValueNamed:(id)arg1 defaultValue:(id)arg2;
- (BOOL)booleanAttributeValueNamed:(id)arg1 defaultValue:(BOOL)arg2;
- (long long)integerAttributeValueNamed:(id)arg1 defaultValue:(long long)arg2;
- (long long)integerAttributeValueNamed:(id)arg1 forElement:(id)arg2 defaultValue:(long long)arg3;
- (unsigned long long)unsignedIntegerAttributeValueNamed:(id)arg1 defaultValue:(unsigned long long)arg2;
- (unsigned long long)unsignedIntegerAttributeValueNamed:(id)arg1 forElement:(id)arg2 defaultValue:(unsigned long long)arg3;
- (id)aggregateReplacementBySettingValue:(id)arg1 forKeyPath:(id)arg2 onObject:(id)arg3 fromKeyPath:(id)arg4 ofObject:(id)arg5;
- (id)inspectedArrayControllerKeys;
- (id)prefixAppliedKeyPathWithConditionalControllerReference:(id)arg1;
- (id)prefixKeyPathWithConditionalControllerReference:(id)arg1;
- (id)keyPathByStripingBindingsControllerSelectionPrefix:(id)arg1;
- (id)allValuesKeyPathForKeyPath:(id)arg1;
- (BOOL)keyPathHasBindingsControllerSelectionPrefix:(id)arg1;
- (id)bindingsControllerKeyPathFromBindingsControllerSelectionKeyPath:(id)arg1;
- (id)representedObjectsForControllerSelectionKeyPath:(id)arg1;
- (id)singleValueForOptionalKeyPath:(id)arg1;
- (id)singleValueForKeyPath:(id)arg1;
- (id)singleValueForKeyPath:(id)arg1 state:(long long *)arg2;
- (id)singleValueForKeyPath:(id)arg1 state:(long long *)arg2 transformer:(dispatch_block_t)arg3;
- (id)singleValueForKeyPath:(id)arg1 state:(long long *)arg2 perObjectTransformer:(dispatch_block_t)arg3;
- (id)allValuesForKeyPath:(id)arg1;
- (id)allValuesForKeyPath:(id)arg1 transformer:(dispatch_block_t)arg2;
- (long long)valueStateForKeyPath:(id)arg1;
- (id)controllerMarkerForValueState:(long long)arg1;
- (id)placeholderTextForValueState:(long long)arg1;
- (id)placeholderTextForValueState:(long long)arg1 narrow:(BOOL)arg2;
- (id)nilPlaceholderValueGivenExplictValue:(id)arg1 andValueKeyPath:(id)arg2;
- (id)placeholderValueGivenExplictValue:(id)arg1 andValueKeyPath:(id)arg2 defaultPlaceholder:(id)arg3;
- (void)enumerateContentAndValuesForKeyPath:(id)arg1 enumerator:(dispatch_block_t)arg2;
- (void)enumerateContentForKeyPath:(id)arg1 enumerator:(dispatch_block_t)arg2;
- (void)configureEnabledRefreshForControl:(id)arg1;
- (void)configureEnabledRefreshForControl:(id)arg1 fromKeyPathFromAttributeNamed:(id)arg2;
- (void)configureEnabledRefreshForControl:(id)arg1 fromKeyPath:(id)arg2;
- (void)tearDownRefreshTriggers;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)performRefresh;
- (id)setupOptionalKeyPathTriggerFromAttributeNamed:(id)arg1;
- (id)setupOptionalAllValuesKeyPathTriggerFromAttributeNamed:(id)arg1;
- (void)triggerRefreshWithChangesToKeyPath:(id)arg1 handler:(dispatch_block_t)arg2;
- (void)triggerRefreshWithChangesToKeyPath:(id)arg1;
- (void)triggerRefresh;
- (void)refreshIfNeeded;
- (void)setupRefreshTriggersAndConfigureIfNeeded;
- (id)appliedValueForKeyPath:(id)arg1 ofObject:(id)arg2;
- (id)appliedValueForKeyPath:(id)arg1;
- (void)applyValue:(id)arg1 withKeyPath:(id)arg2;
- (void)applyValue:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3;
- (void)configureActionSelectorForControl:(id)arg1;
- (void)configureActionFilterForTextField:(id)arg1;
- (void)userDidChangeValue:(id)arg1;
- (double)accessoryCenterAnchor;
- (double)baseline;
- (struct CGRect)frameForLabel:(id)arg1;
- (BOOL)canTileIntoColumnsWithMinimumWidth:(double)arg1;
- (BOOL)canTileIntoColumnsWithProperty:(id)arg1;
- (void)propertyViewWillUninstallFromWindow;
- (void)propertyViewDidInstallIntoWindow;
- (void)propertyViewWillUninstallFromContentView;
- (void)propertyViewDidInstallIntoContentView;
@property(readonly) NSBundle *inspectorControllerBundle;
- (id)nibBundle;
- (id)nibName;
- (BOOL)isCustomProperty;
- (void)primitiveInvalidate;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

