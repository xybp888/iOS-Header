//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactGroupPickerViewController, CNPolicy, NSArray, NSString;

@protocol CNContactGroupPickerDelegate <NSObject>
- (void)contactGroupPickerDidFinish:(CNContactGroupPickerViewController *)arg1 withGroup:(NSString *)arg2;
- (void)contactGroupPickerDidCancel:(CNContactGroupPickerViewController *)arg1;
- (CNPolicy *)policy;
- (NSArray *)alreadyPickedGroups;
@end

