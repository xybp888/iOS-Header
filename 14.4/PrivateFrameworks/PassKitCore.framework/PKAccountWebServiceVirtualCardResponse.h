//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKVirtualCard;

@interface PKAccountWebServiceVirtualCardResponse : PKAccountWebServiceResponse
{
    PKVirtualCard *_virtualCard;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) PKVirtualCard *virtualCard; // @synthesize virtualCard=_virtualCard;
- (id)initWithData:(id)arg1;

@end

