//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSPredicateVisitor-Protocol.h>

@class NSError, NSPredicate, NSSet;

@interface RTPredicateValidator : NSObject <NSPredicateVisitor>
{
    _Bool _validated;
    NSPredicate *_predicate;
    NSSet *_allowedKeys;
    NSError *_error;
}

+ (_Bool)validatePredicate:(id)arg1 allowedKeys:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSSet *allowedKeys; // @synthesize allowedKeys=_allowedKeys;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool validated; // @synthesize validated=_validated;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (_Bool)validateWithError:(id *)arg1;
- (id)initWithPredicate:(id)arg1 allowedKeys:(id)arg2;

@end

