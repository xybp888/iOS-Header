//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface MTPromiseResult : NSObject
{
    NSError *_error;
    id _result;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id result; // @synthesize result=_result;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithResult:(id)arg1 error:(id)arg2;

@end

