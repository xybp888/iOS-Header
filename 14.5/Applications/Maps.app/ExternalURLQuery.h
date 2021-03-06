//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ExternalURLQuery : NSObject
{
    int _resultProviderId;
    NSString *_query;
    unsigned long long _muid;
    NSString *_contentProvider;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(readonly, nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToExternalURLQuery:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithQuery:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;

@end

