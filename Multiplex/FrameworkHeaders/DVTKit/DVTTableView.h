//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTProgressIndicatorProvidingView-Protocol.h"

@class NSEvent, NSIndexSet, NSMapTable, NSString, NSTextField;

@interface DVTTableView : NSTableView <DVTProgressIndicatorProvidingView>
{
    NSTextField *_emptyContentTextField;
    NSMapTable *_progressIndicatorsByItem;
    struct {
        unsigned int allowsSizingShorterThanClipView:1;
        unsigned int reserved:7;
    } _dvtTVFlags;
    unsigned long long _gridLineStyleBeforeEmptyContentStringShown;
    BOOL _skipGridLinesOnLastRow;
    BOOL _drawsGridLinesForEmptyContent;
    int _emptyContentStringStyle;
    NSString *_emptyContentString;
    NSIndexSet *_draggedRows;
    NSEvent *_event;
    CDStruct_2b6e6e30 _gridLineInset;
}

@property(retain) NSEvent *event; // @synthesize event=_event;
@property CDStruct_2b6e6e30 gridLineInset; // @synthesize gridLineInset=_gridLineInset;
@property BOOL drawsGridLinesForEmptyContent; // @synthesize drawsGridLinesForEmptyContent=_drawsGridLinesForEmptyContent;
@property BOOL skipGridLinesOnLastRow; // @synthesize skipGridLinesOnLastRow=_skipGridLinesOnLastRow;
@property(copy) NSIndexSet *draggedRows; // @synthesize draggedRows=_draggedRows;
@property int emptyContentStringStyle; // @synthesize emptyContentStringStyle=_emptyContentStringStyle;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)_drawBackgroundForGroupRow:(long long)arg1 clipRect:(struct CGRect)arg2 isButtedUpRow:(BOOL)arg3;
- (id)progressIndicatorForItem:(id)arg1 createIfNecessary:(BOOL)arg2 progressIndicatorStyle:(unsigned long long)arg3;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)keyDown:(id)arg1;
@property(readonly) NSIndexSet *contextMenuSelectedRowIndexes;
- (id)clickedRowIndexes;
- (void)viewWillDraw;
- (void)_showEmptyContentString;
- (void)_hideEmptyContentString;
- (struct CGSize)_adjustFrameSizeToFitSuperview:(struct CGSize)arg1;
@property BOOL allowsSizingShorterThanClipView;
- (void)_registerNibWithName:(id)arg1 usingIdentifier:(id)arg2;
- (void)registerDVTTableRowViewNibUsingIdentifier:(id)arg1;
- (void)registerDVTTableCellViewMultiLineNibUsingIdentifier:(id)arg1;
- (void)registerDVTTableCellViewTwoLineNibUsingIdentifier:(id)arg1;
- (void)registerDVTTableCellViewOneLineNibUsingIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dvt_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

