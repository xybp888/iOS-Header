//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/AKAppleIDServerUIFieldExtractor-Protocol.h>

@class NSString, RUIObjectModel;

@interface AKAppleIDObjectModelFieldExtractor : NSObject <AKAppleIDServerUIFieldExtractor>
{
    RUIObjectModel *_objectModel;
}

- (void).cxx_destruct;
- (id)_valueForTextFieldFromPage:(id)arg1 rowID:(id)arg2;
- (id)_valueForFieldWithID:(id)arg1 inObjectModel:(id)arg2;
- (id)valueForFieldWithID:(id)arg1;
- (id)initWithObjectModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

