//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "CALayer-Protocol.h"

@class IDEActivityStatusContainerLabelLayer, NSArray, NSMapTable, NSMutableArray, NSString;

@interface IDEActivityStatusContainerLayer : CALayer
{
    dispatch_block_t _statusCategoryClickHandler;
    IDEActivityStatusContainerLabelLayer *_labelLayer;
    NSMutableArray *_visibleStatusCategories;
    NSMapTable *_statusCategoryToObservationTokenMap;
    NSMapTable *_statusCategoryToHidingValidatorMap;
    NSMapTable *_statusCategoryToLayerMap;
    NSMapTable *_statusCategoryToHandlerMap;
    NSString *_rootContainerLabel;
    NSString *_emptyRootContainerLabel;
    NSArray *_statusCategories;
    CALayer *_emptyRootContainerLayer;
    struct CGSize _preferredSize;
}

@property(retain) CALayer *emptyRootContainerLayer; // @synthesize emptyRootContainerLayer=_emptyRootContainerLayer;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly) NSArray *visibleStatusCategories; // @synthesize visibleStatusCategories=_visibleStatusCategories;
@property(copy, nonatomic) dispatch_block_t statusCategoryClickHandler; // @synthesize statusCategoryClickHandler=_statusCategoryClickHandler;
@property(copy, nonatomic) NSString *emptyRootContainerLabel; // @synthesize emptyRootContainerLabel=_emptyRootContainerLabel;
@property(copy, nonatomic) NSString *rootContainerLabel; // @synthesize rootContainerLabel=_rootContainerLabel;
@property(copy, nonatomic) NSArray *statusCategories; // @synthesize statusCategories=_statusCategories;
- (void)sizeToFit;
- (void)layoutSublayers;
- (void)updateClickHandlerDisableState:(BOOL)arg1;
- (void)addVisibleStatusCategory:(id)arg1;
- (void)removeVisibleStatusCategory:(id)arg1;
- (id)orderedStatusCategoryLayers;
- (id)_buildEmptyRootContainerLayer;
- (id)textAttributes;
- (void)addLayerForCategory:(id)arg1;
- (id)makeLayerForCategory:(id)arg1;
- (void)removeLayerForCategory:(id)arg1;
- (id)layerForCategory:(id)arg1;
- (void)setStatusClickHandlerForCategory:(id)arg1 clickHandler:(dispatch_block_t)arg2;
- (id)effectiveStatusContextLabel;
- (void)categoryDidChangeCount:(id)arg1;
- (void)stopObservingCategory:(id)arg1;
- (void)startObservingCategory:(id)arg1;
- (id)hidingValidatorForCategory:(id)arg1;
- (void)dealloc;
- (id)init;

@end

