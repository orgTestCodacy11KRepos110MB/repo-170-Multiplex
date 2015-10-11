//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "CAGradientLayer-Protocol.h"

#import "IDENavigationHUDBorderedLayer-Protocol.h"

@class CALayer, NSString;

@interface IDENavigationHUDBorderedGradientLayer : CAGradientLayer <IDENavigationHUDBorderedLayer>
{
    int _borderSides;
    int _highlightSides;
    CALayer *_horizontalHighlightLayer;
    CALayer *_verticalHighlightLayer;
    CALayer *_rightBorderLayer;
    CALayer *_leftBorderLayer;
    CALayer *_bottomBorderLayer;
    CALayer *_topBorderLayer;
}

- (void)layoutSublayers;
- (BOOL)hasVerticalHighlight;
@property int highlightSides;
@property int borderSides;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

