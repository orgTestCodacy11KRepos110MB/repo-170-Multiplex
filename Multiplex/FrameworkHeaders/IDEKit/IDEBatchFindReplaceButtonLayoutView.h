//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTLayoutView_ML-Protocol.h"

@class NSButton;

@interface IDEBatchFindReplaceButtonLayoutView : DVTLayoutView_ML
{
    NSButton *replaceAllButton;
    NSButton *replaceSelectedButton;
    NSButton *previewButton;
    BOOL _sizesCondensed;
    BOOL _marginsCondensed;
    BOOL _replaceAllCondensed;
    double replaceAllOriginalWidth;
    double previewOriginalWidth;
}

- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)awakeFromNib;

@end

