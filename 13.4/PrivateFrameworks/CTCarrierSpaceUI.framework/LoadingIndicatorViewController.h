//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface LoadingIndicatorViewController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIActivityIndicatorView *_spinnerView;
    NSString *_titleText;
    NSString *_messageText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)init;

@end

