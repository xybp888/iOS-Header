//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface HKAxisAnnotation : NSObject
{
    NSAttributedString *_annotationText;
    id _position;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id position; // @synthesize position=_position;
@property(readonly, nonatomic) NSAttributedString *annotationText; // @synthesize annotationText=_annotationText;
- (id)initWithAnnotation:(id)arg1 position:(id)arg2;

@end

