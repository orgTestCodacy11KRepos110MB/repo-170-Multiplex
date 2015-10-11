//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "IDEURLHandler-Protocol.h"

@class NSString;

@interface IDEBotsURLHandler : NSObject <IDEURLHandler>
{
}

+ (void)handleURL:(id)arg1 completionHandler:(dispatch_block_t)arg2;
+ (void)showWorkspaceForProjectName:(id)arg1 bot:(id)arg2 integration:(id)arg3 completionHandler:(dispatch_block_t)arg4;
+ (BOOL)shouldRegisterURLHandlerForScheme:(id)arg1;
+ (void)selectBotInReportsNavigator:(id)arg1 integration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

