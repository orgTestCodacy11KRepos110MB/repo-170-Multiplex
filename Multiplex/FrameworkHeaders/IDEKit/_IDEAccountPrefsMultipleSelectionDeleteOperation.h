//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTOperation-Protocol.h"

@interface _IDEAccountPrefsMultipleSelectionDeleteOperation : DVTOperation
{
    BOOL _didFinishDeleting;
}

+ (id)keyPathsForValuesAffectingIsFinished;
@property(nonatomic) BOOL didFinishDeleting; // @synthesize didFinishDeleting=_didFinishDeleting;
- (BOOL)isFinished;

@end

