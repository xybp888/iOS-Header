//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSDictionary, NSString, RBSProcessInstance;
@protocol RBSProcessBundleDataSource;

@interface RBSProcessBundle : NSObject <RBSXPCSecureCoding>
{
    NSDictionary *_plistValues;
    NSString *_identifier;
    NSString *_path;
    NSString *_executablePath;
    NSString *_extensionPointIdentifier;
    id <RBSProcessBundleDataSource> _dataSource;
    RBSProcessInstance *_instance;
}

+ (_Bool)supportsRBSXPCSecureCoding;
+ (id)bundleWithDataSource:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RBSProcessInstance *instance; // @synthesize instance=_instance;
@property(readonly, nonatomic) __weak id <RBSProcessBundleDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)bundleInfoValueForKey:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

