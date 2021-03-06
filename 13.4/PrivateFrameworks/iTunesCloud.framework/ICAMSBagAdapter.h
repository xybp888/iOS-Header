//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/AMSBagProtocol-Protocol.h>

@class ICStoreRequestContext, ICURLBag, NSDate, NSError, NSMutableArray, NSString;

@interface ICAMSBagAdapter : NSObject <AMSBagProtocol>
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_pendingBagValuePromises;
    ICURLBag *_urlBag;
    NSError *_urlBagLoadingError;
    ICStoreRequestContext *_requestContext;
}

+ (_Bool)_value:(id)arg1 matchesExpectedType:(unsigned long long)arg2;
+ (id)_valueFromBagDictionary:(id)arg1 forKeyPath:(id)arg2 valueType:(unsigned long long)arg3;
+ (id)_valueForBagKey:(id)arg1 valueType:(unsigned long long)arg2 fromURLBag:(id)arg3 urlBagLoadingError:(id)arg4 valueRetrievingError:(id *)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void)_didFinishLoadingBag:(id)arg1 error:(id)arg2;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithRequestContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

