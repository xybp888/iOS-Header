//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperationInfo.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding>
{
    _Bool _recursively;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool recursively; // @synthesize recursively=_recursively;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

