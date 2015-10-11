//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSSet, NSString;

@interface DVTTeamRecord : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingDisplayName;
- (id)rolesForDeveloper:(id)arg1;
- (void)pruneInstalledProvisioningProfiles;
@property(readonly, nonatomic) NSString *displayName;

// Remaining properties
@property(retain, nonatomic) NSSet *appIDs; // @dynamic appIDs;
@property(retain, nonatomic) NSSet *applicationGroups; // @dynamic applicationGroups;
@property(retain, nonatomic) NSSet *certificates; // @dynamic certificates;
@property(retain, nonatomic) NSSet *cloudContainers; // @dynamic cloudContainers;
@property(retain, nonatomic) NSSet *developers; // @dynamic developers;
@property(retain, nonatomic) NSSet *devices; // @dynamic devices;
@property(nonatomic) BOOL enhancedDevelopmentForMembers; // @dynamic enhancedDevelopmentForMembers;
@property(retain, nonatomic) NSSet *iosDevelopers; // @dynamic iosDevelopers;
@property(nonatomic) BOOL isFreeProvisioningTeam; // @dynamic isFreeProvisioningTeam;
@property(retain, nonatomic) NSSet *macDevelopers; // @dynamic macDevelopers;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *omcIdentifiers; // @dynamic omcIdentifiers;
@property(retain, nonatomic) NSSet *provisioningProfiles; // @dynamic provisioningProfiles;
@property(retain, nonatomic) NSSet *roles; // @dynamic roles;
@property(retain, nonatomic) NSSet *shoeboxIDs; // @dynamic shoeboxIDs;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) NSString *teamId; // @dynamic teamId;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

