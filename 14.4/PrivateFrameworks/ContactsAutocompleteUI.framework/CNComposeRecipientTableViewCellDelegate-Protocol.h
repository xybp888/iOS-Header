//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/NSObject-Protocol.h>

@class CNComposeRecipientTableViewCell;

@protocol CNComposeRecipientTableViewCellDelegate <NSObject>
- (void)didTapInfoButtonForCell:(CNComposeRecipientTableViewCell *)arg1;
- (void)didTapDisambiguationChevronForCell:(CNComposeRecipientTableViewCell *)arg1;
- (_Bool)willProvideOverrideImageDataForCell:(CNComposeRecipientTableViewCell *)arg1 completionBlock:(void (^)(NSData *))arg2;
@end

