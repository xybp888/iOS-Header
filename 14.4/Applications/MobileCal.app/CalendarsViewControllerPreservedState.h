//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendar, NSArray, UIViewController;

@interface CalendarsViewControllerPreservedState : NSObject
{
    EKCalendar *_centeredCalendar;
    UIViewController *_displayedEditor;
    NSArray *_presentedViewControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *presentedViewControllers; // @synthesize presentedViewControllers=_presentedViewControllers;
@property(retain, nonatomic) UIViewController *displayedEditor; // @synthesize displayedEditor=_displayedEditor;
@property(retain, nonatomic) EKCalendar *centeredCalendar; // @synthesize centeredCalendar=_centeredCalendar;

@end

