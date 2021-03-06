//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, REElement;

@interface REElementDataSourceUpdate : NSObject
{
    REElement *_element;
    unsigned long long _type;
    NSString *_section;
}

+ (id)refreshElement:(id)arg1 inSection:(id)arg2;
+ (id)removeElement:(id)arg1 inSection:(id)arg2;
+ (id)insertElement:(id)arg1 inSection:(id)arg2;
+ (id)reloadElement:(id)arg1 inSection:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *section; // @synthesize section=_section;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) REElement *element; // @synthesize element=_element;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithElement:(id)arg1 section:(id)arg2 updateType:(unsigned long long)arg3;

@end

