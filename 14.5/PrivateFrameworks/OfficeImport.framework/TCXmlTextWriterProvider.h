//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCXmlTextWriterProvider : NSObject
{
    struct _xmlTextWriter *_textWriter;
}

@property(readonly, nonatomic) struct _xmlTextWriter *textWriter; // @synthesize textWriter=_textWriter;
- (_Bool)tearDown;
- (_Bool)setUpWithTextWriter:(struct _xmlTextWriter *)arg1;
- (_Bool)setUp;
- (void)dealloc;

@end

