//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@interface KeyLoopSplicingContainerView : NSView
{
    NSView *_externalNextKeyView;
    NSView *_firstKeyView;
    NSView *_lastKeyView;
}

@property(nonatomic) __weak NSView *lastKeyView; // @synthesize lastKeyView=_lastKeyView;
@property(nonatomic) __weak NSView *firstKeyView; // @synthesize firstKeyView=_firstKeyView;
- (void)setNextKeyView:(id)arg1;

@end

