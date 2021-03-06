//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOrderedSet, NSString;

@interface ICContentMapping : NSObject
{
    NSDictionary *_definition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
- (void)getStringRepresentation:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (void)getContentCollection:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;
@property(readonly, nonatomic) NSOrderedSet *contentItemClasses;
@property(readonly, nonatomic) _Bool inputRequired;
@property(readonly, nonatomic) _Bool supportsMultipleItems;
@property(readonly, nonatomic) id parameterDefault;
@property(readonly, nonatomic) NSDictionary *parameterUI;
@property(readonly, nonatomic) _Bool skipURLEncoding;
@property(readonly, nonatomic) NSDictionary *valueMapping;
@property(readonly, nonatomic) NSString *destinationKey;
@property(readonly, nonatomic) NSString *sourceKey;
@property(readonly, nonatomic) NSString *destinationType;
@property(readonly, nonatomic) NSString *sourceType;
- (id)initWithDefinition:(id)arg1;

@end

