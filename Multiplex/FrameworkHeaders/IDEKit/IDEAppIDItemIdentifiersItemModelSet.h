//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEProjectItemModel, NSOrderedSet, NSSet, NSString;

@interface IDEAppIDItemIdentifiersItemModelSet : NSObject <DVTInvalidation>
{
    id  _flightCheck;
    NSOrderedSet *_unexpandedIdentifiers;
    BOOL _requiresPortalIdentifiers;
    IDEProjectItemModel *_itemModel;
    NSString *_teamItemsKeyPath;
    NSString *_featuresItemsKeyPath;
    Class _listTeamItemsOpClass;
    NSString *_flightCheckName;
    NSSet *_availableTeamIdentifiers;
}

+ (id)expandedIdentifiers:(id)arg1 targetCapabilitiesContext:(id)arg2 error:(id *)arg3;
+ (void)initialize;
@property(retain) NSSet *availableTeamIdentifiers; // @synthesize availableTeamIdentifiers=_availableTeamIdentifiers;
@property(readonly) NSString *flightCheckName; // @synthesize flightCheckName=_flightCheckName;
@property(readonly) Class listTeamItemsOpClass; // @synthesize listTeamItemsOpClass=_listTeamItemsOpClass;
@property(readonly) NSString *featuresItemsKeyPath; // @synthesize featuresItemsKeyPath=_featuresItemsKeyPath;
@property(readonly) NSString *teamItemsKeyPath; // @synthesize teamItemsKeyPath=_teamItemsKeyPath;
@property(retain) IDEProjectItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(readonly) BOOL requiresPortalIdentifiers; // @synthesize requiresPortalIdentifiers=_requiresPortalIdentifiers;
@property(readonly) id  flightCheck;
- (id)_featureDelegate;
- (id)refreshAvailableTeamIdentifiers;
- (void)_readAvailableTeamIdentifiers;
- (id)expandedIdentifiersWithError:(id *)arg1;
- (id)expandedIdentifier:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSOrderedSet *unexpandedIdentifiers;
- (void)_setUnexpandedIdentifiers:(id)arg1 postAssignmentBlock:(dispatch_block_t)arg2;
- (void)primitiveInvalidate;
- (id)initWithoutPortalWithItemModel:(id)arg1;
- (id)initWithItemModel:(id)arg1 teamItemsKeyPath:(id)arg2 featuresItemsKeyPath:(id)arg3 listTeamItemsOpClass:(Class)arg4 flightCheckName:(id)arg5;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

