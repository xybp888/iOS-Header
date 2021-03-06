//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFPasswordAccount.h>

@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount
{
    NSURL *_endpointURL;
}

+ (id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3;
+ (unsigned long long)modelVersion;
+ (_Bool)allowsMultipleAccounts;
+ (id)localizedServiceName;
+ (id)serviceID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;
- (_Bool)isValid;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;

@end

