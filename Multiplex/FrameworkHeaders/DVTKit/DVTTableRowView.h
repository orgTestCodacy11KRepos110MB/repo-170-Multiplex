//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class DVTTableCellViewVibrantView, NSColor, NSTrackingArea;

@interface DVTTableRowView : NSTableRowView
{
    DVTTableCellViewVibrantView *_secondaryHighlightView;
    NSTrackingArea *_trackingArea;
    BOOL _drawsSecondaryHighlight;
    BOOL _alwaysDrawSeparatorLine;
    id  _mouseInsideDelegate;
    NSColor *_rowGridLineColor;
    CDStruct_2b6e6e30 _rowGridLineInset;
}

@property(nonatomic) BOOL alwaysDrawSeparatorLine; // @synthesize alwaysDrawSeparatorLine=_alwaysDrawSeparatorLine;
@property(retain) NSColor *rowGridLineColor; // @synthesize rowGridLineColor=_rowGridLineColor;
@property CDStruct_2b6e6e30 rowGridLineInset; // @synthesize rowGridLineInset=_rowGridLineInset;
@property(nonatomic) __weak id  mouseInsideDelegate; // @synthesize mouseInsideDelegate=_mouseInsideDelegate;
@property(nonatomic) BOOL drawsSecondaryHighlight; // @synthesize drawsSecondaryHighlight=_drawsSecondaryHighlight;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (BOOL)isOpaque;
- (void)didAddSubview:(id)arg1;
- (void)_updateSecondaryHighlightViewFrame;
- (void)setSelected:(BOOL)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (long long)groupRowStyle2;
- (void)drawSeparatorLineIfNeededInRect:(struct CGRect)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (struct CGRect)separatorRectForTable:(id)arg1;
- (CDStruct_2b6e6e30)rowGridLineInsetForTableView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dvt_commonInit;

@end

