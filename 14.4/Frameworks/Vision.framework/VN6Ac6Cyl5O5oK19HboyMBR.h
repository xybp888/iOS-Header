//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelImageprint.h>

@interface VN6Ac6Cyl5O5oK19HboyMBR : VNEspressoModelImageprint
{
    unsigned long long _imageSignatureprintType;
}

+ (_Bool)_signaturePrintTypeSupported:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (unsigned long long)currentSerializationVersion;
+ (unsigned long long)serializationMagicNumber;
+ (unsigned int)currentCodingVersion;
+ (id)currentVersion;
@property(readonly) unsigned long long imageSignatureprintType; // @synthesize imageSignatureprintType=_imageSignatureprintType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializedLength;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 imageSignatureprintType:(unsigned long long)arg5 requestRevision:(unsigned long long)arg6;

@end

