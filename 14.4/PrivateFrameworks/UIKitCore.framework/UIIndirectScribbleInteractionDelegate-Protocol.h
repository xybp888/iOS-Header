//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIIndirectScribbleInteraction;
@protocol NSCopying><NSObject;

@protocol UIIndirectScribbleInteractionDelegate <NSObject>
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 focusElementIfNeeded:(id <NSCopying><NSObject>)arg2 referencePoint:(struct CGPoint)arg3 completion:(void (^)(UIResponder<UITextInput> *))arg4;
- (struct CGRect)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 frameForElement:(id <NSCopying><NSObject>)arg2;
- (_Bool)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 isElementFocused:(id <NSCopying><NSObject>)arg2;
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(void (^)(NSArray *))arg3;

@optional
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 didFinishWritingInElement:(id <NSCopying><NSObject>)arg2;
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 willBeginWritingInElement:(id <NSCopying><NSObject>)arg2;
- (_Bool)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 shouldDelayFocusForElement:(id <NSCopying><NSObject>)arg2;
@end

