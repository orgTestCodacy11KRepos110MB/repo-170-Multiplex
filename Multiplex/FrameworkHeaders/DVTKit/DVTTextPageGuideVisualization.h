//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <DVTKit/DVTTextVisualization.h>

@class NSColor;

@interface DVTTextPageGuideVisualization : DVTTextVisualization
{
    unsigned long long _columnNumber;
    double _pageGuideX;
    NSColor *_verticalLineColor;
    NSColor *_outOfBoundsColor;
}

+ (unsigned long long)defaultDrawOrdering;
@property(nonatomic) unsigned long long columnNumber; // @synthesize columnNumber=_columnNumber;
- (void)drawUnderTextInRect:(struct CGRect)arg1;
- (void)fontAndColorThemeChanged;
- (void)_updatePageGuideXCoordinate;

@end

