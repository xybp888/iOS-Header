//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNPhotoPickerActionsViewController, CNPhotoPickerProviderItem, NSIndexPath;

@protocol CNPhotoPickerActionsViewControllerDelegate <NSObject>
- (void)photoPickerActionsViewController:(CNPhotoPickerActionsViewController *)arg1 didPerformAction:(long long)arg2 withProviderItem:(CNPhotoPickerProviderItem *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)photoPickerActionsViewControllerDidFinish:(CNPhotoPickerActionsViewController *)arg1;
@end

