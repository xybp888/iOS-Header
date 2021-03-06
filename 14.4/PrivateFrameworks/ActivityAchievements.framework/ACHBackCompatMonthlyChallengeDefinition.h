//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/NSSecureCoding-Protocol.h>

@class NSExpression, NSString;

@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_typeString;
    NSExpression *_goalExpression;
}

+ (_Bool)supportsSecureCoding;
+ (id)definitionFromData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSExpression *goalExpression; // @synthesize goalExpression=_goalExpression;
@property(readonly, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_goalExpressionValue;
- (id)_dateComponentsFromIdentifier;
- (unsigned long long)_monthlyChallengeTypeFromTypeString;
- (id)template;

@end

