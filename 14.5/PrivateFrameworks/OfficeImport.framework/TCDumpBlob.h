//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TCDumpType.h>

__attribute__((visibility("hidden")))
@interface TCDumpBlob : TCDumpType
{
    unsigned long long mSize;
}

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithSize_:(unsigned long long)arg1;

@end

