//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTLayoutView_ML-Protocol.h"

@class DVTNotificationToken, NSView;

@interface IDEInspectorCenteringView : DVTLayoutView_ML
{
    NSView *centeredView;
    DVTNotificationToken *_centeredViewFrameChangeToken;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)centeredViewFrameDidChange:(id)arg1;
- (void)awakeFromNib;

@end

