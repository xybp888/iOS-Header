//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSString;

@interface USOSerializedGraphEdge : NSObject <NSSecureCoding>
{
    int _usoElementId;
    unsigned int _enumeration;
    unsigned long long _fromVertex;
    unsigned long long _toVertex;
    NSString *_edgeLabel;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSString *edgeLabel; // @synthesize edgeLabel=_edgeLabel;
@property unsigned int enumeration; // @synthesize enumeration=_enumeration;
@property unsigned long long toVertex; // @synthesize toVertex=_toVertex;
@property unsigned long long fromVertex; // @synthesize fromVertex=_fromVertex;
@property int usoElementId; // @synthesize usoElementId=_usoElementId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsoElementId:(int)arg1 fromVertex:(unsigned long long)arg2 toVertex:(unsigned long long)arg3 enumeration:(unsigned int)arg4;

@end

