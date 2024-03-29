//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LibraryResultEnumerator-Protocol.h"

@protocol NSFastEnumeration;

@interface LibraryLazyResultsEnumerator : NSObject <LibraryResultEnumerator>
{
    CDUnknownBlockType _block;
    id <NSFastEnumeration> _enumerator;
    long long _resultComplexity;
}

- (void).cxx_destruct;
@property(readonly) long long resultComplexity; // @synthesize resultComplexity=_resultComplexity;
- (id)_enumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithComplexity:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

