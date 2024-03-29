//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUExportRequest.h>

#import <NeutrinoCore/NUTimeBased-Protocol.h>

@class NSDictionary, NSString, NUColorSpace, NUImageExportFormat;

@interface NUImageExportRequest : NUExportRequest <NUTimeBased>
{
    _Bool _renderToData;
    _Bool _renderWithIOSurface;
    NUColorSpace *_colorSpace;
    NUImageExportFormat *_format;
    NSDictionary *_imageProperties;
    NSDictionary *_auxImages;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *auxImages; // @synthesize auxImages=_auxImages;
@property(copy) NSDictionary *imageProperties; // @synthesize imageProperties=_imageProperties;
@property(nonatomic) _Bool renderWithIOSurface; // @synthesize renderWithIOSurface=_renderWithIOSurface;
@property(nonatomic) _Bool renderToData; // @synthesize renderToData=_renderToData;
@property(copy, nonatomic) NUImageExportFormat *format; // @synthesize format=_format;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newRenderJob;
- (id)initWithComposition:(id)arg1 exportFormat:(id)arg2;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end

