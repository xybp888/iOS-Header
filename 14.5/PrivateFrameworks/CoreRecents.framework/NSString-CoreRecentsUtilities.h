//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CoreRecentsUtilities)
- (id)cr_lowercaseStringWithStandardLocale;
- (id)cr_uniqueFilenameWithRespectToFilenames:(id)arg1;
- (id)cr_copyIDNAEncodedEmailAddress;
- (id)cr_copyIDNADecodedEmailAddress;
- (id)cr_copyStringByEncodingIDNAInRange:(struct _NSRange)arg1;
- (id)cr_copyStringByDecodingIDNAInRange:(struct _NSRange)arg1;
- (struct _NSRange)cr_rangeOfAddressDomain;
@end

