//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding>
{
    _Bool _hasArea;
    NSString *_placeName;
    double _minimumArea;
    double _maximumArea;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double maximumArea; // @synthesize maximumArea=_maximumArea;
@property(readonly, nonatomic) double minimumArea; // @synthesize minimumArea=_minimumArea;
@property(readonly, nonatomic) _Bool hasArea; // @synthesize hasArea=_hasArea;
@property(readonly, copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addPlaceInfoArea:(double)arg1;
- (id)initWithPlaceName:(id)arg1;

@end

