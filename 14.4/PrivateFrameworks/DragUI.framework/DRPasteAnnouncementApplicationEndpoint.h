//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DragUI/DRPasteAnnouncementEndpoint.h>

@class NSData, NSString;

@interface DRPasteAnnouncementApplicationEndpoint : DRPasteAnnouncementEndpoint
{
    struct {
        unsigned int isHomeScreen:1;
    } _flags;
    NSData *_persistentIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)homeScreenEndpoint;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 persistentIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *localizedName; // @dynamic localizedName;

@end

