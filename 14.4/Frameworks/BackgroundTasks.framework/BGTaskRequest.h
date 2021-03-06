//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackgroundTasks/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface BGTaskRequest : NSObject <NSCopying>
{
    NSString *_identifier;
    NSDate *_earliestBeginDate;
}

+ (id)_requestFromActivity:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSDate *earliestBeginDate; // @synthesize earliestBeginDate=_earliestBeginDate;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithIdentifier:(id)arg1;

@end

