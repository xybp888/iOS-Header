//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface CKQuadTreeNode : NSObject
{
    CKQuadTreeNode *_topRight;
    CKQuadTreeNode *_topLeft;
    CKQuadTreeNode *_bottomLeft;
    CKQuadTreeNode *_bottomRight;
    NSMutableDictionary *_userInfo;
    NSValue *_point;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *point; // @synthesize point=_point;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)visit:(CDUnknownBlockType)arg1;
- (void)insertPoint:(struct CGPoint)arg1;
- (id)nodeForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=isLeaf) _Bool leaf;
@property(readonly, copy, nonatomic) NSArray *nodes;
- (id)debugDescription;
- (id)debugDescriptionWithLevel:(long long)arg1;
- (id)description;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)init;

@end

