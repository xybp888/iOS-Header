//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSURLSessionTaskDependencyDescription;

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject
{
    NSURLSessionTaskDependencyDescription *dependencyDescription;
    NSMutableArray *children;
    NSMutableArray *childrenResourceIdentifiers;
    NSNumber *rootParentStreamID;
    NSMutableDictionary *_dependentToParentStreamIDs;
    NSMutableDictionary *_parentToParentStreamIDs;
}

- (void)dealloc;
- (id)init;

@end

