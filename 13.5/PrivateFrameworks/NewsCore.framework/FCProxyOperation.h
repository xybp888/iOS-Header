//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@interface FCProxyOperation : FCOperation
{
    FCOperation *_underlyingOperation;
}

+ (id)proxyForOperation:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) FCOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
- (void)_revisitQualityOfService;
- (void)_revisitRelativePriority;
- (void)setQualityOfService:(long long)arg1;
- (void)setRelativePriority:(long long)arg1;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;

@end

