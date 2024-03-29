//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class NUSaliencyRequest, VNSaliencyImageObservation;

@interface NUSaliencyJob : NURenderJob
{
    VNSaliencyImageObservation *_saliencyObservation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VNSaliencyImageObservation *saliencyObservation; // @synthesize saliencyObservation=_saliencyObservation;
- (void)cleanUp;
- (id)result;
- (_Bool)render:(out id *)arg1;
- (id)saliencyObservationForImage:(id)arg1 error:(out id *)arg2;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
@property(readonly, nonatomic) NUSaliencyRequest *saliencyRequest;
- (id)initWithRequest:(id)arg1;
- (id)initWithSaliencyRequest:(id)arg1;

@end

