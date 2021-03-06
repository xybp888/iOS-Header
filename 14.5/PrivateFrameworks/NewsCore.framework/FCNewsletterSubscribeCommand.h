//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSArray, NSString;

@interface FCNewsletterSubscribeCommand : FCCommand
{
    NSString *_newsletter;
    NSArray *_includeArray;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *includeArray; // @synthesize includeArray=_includeArray;
@property(copy, nonatomic) NSString *newsletter; // @synthesize newsletter=_newsletter;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNewsletter:(id)arg1 includeArray:(id)arg2;

@end

