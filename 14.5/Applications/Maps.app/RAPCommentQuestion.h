//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPQuestion.h"

@class NSArray, NSString, RAPPlaceCorrectableString;

__attribute__((visibility("hidden")))
@interface RAPCommentQuestion : RAPQuestion
{
    _Bool _shouldShowEmail;
    NSString *_commentsTitle;
    NSString *_commentsPlaceholderText;
    long long _emphasis;
    NSString *_localizedPhotosPickerExplanation;
    NSString *_comment;
    NSArray *_photos;
    long long _photoType;
    RAPPlaceCorrectableString *_correctableEmail;
}

+ (id)validatedComment:(id)arg1;
+ (unsigned long long)maximumCommentLength;
+ (id)_localizedOptionalInformationTitle;
+ (id)_localizedMoreInformationTitle;
+ (id)_localizedInformationTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) RAPPlaceCorrectableString *correctableEmail; // @synthesize correctableEmail=_correctableEmail;
@property(nonatomic) _Bool shouldShowEmail; // @synthesize shouldShowEmail=_shouldShowEmail;
@property(nonatomic) long long photoType; // @synthesize photoType=_photoType;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) long long emphasis; // @synthesize emphasis=_emphasis;
@property(readonly, nonatomic) NSString *commentsPlaceholderText; // @synthesize commentsPlaceholderText=_commentsPlaceholderText;
@property(readonly, nonatomic) NSString *commentsTitle; // @synthesize commentsTitle=_commentsTitle;
- (void)_fillSubmissionParameters:(id)arg1;
- (_Bool)_isNowComplete;
@property(readonly, nonatomic) _Bool canAddPhoto;
- (id)photoAtIndex:(unsigned long long)arg1;
- (void)removeAllPhotos;
- (_Bool)removePhotoForIdentifier:(id)arg1;
- (void)removePhotoAtIndex:(unsigned long long)arg1;
- (void)addPhoto:(id)arg1;
@property(readonly, nonatomic) unsigned long long remainingCharacters;
- (unsigned long long)maximumNumberOfPhotos;
- (void)_setLocalizedPhotosPickerExplanation:(id)arg1;
- (void)_setPlaceholderText:(id)arg1;
- (void)_setCommentsTitle:(id)arg1 placeholderText:(id)arg2;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 title:(id)arg3 placeholderText:(id)arg4 emphasis:(long long)arg5;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 title:(id)arg3 placeholderText:(id)arg4 emphasis:(long long)arg5 localizedPhotosPickerExplanation:(id)arg6;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;
@property(readonly, nonatomic) NSString *localizedPhotosPickerExplanation; // @synthesize localizedPhotosPickerExplanation=_localizedPhotosPickerExplanation;
@property(readonly, nonatomic) NSString *localizedPhotosPickerLabel;

@end

