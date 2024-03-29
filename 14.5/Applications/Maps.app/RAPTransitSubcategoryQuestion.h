//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPMenuQuestion.h"

#import "RAPMenuItem-Protocol.h"
#import "RAPQuestionAcceptingAlternatePlace-Protocol.h"

@class NSString, UIImage;
@protocol RAPPlace;

__attribute__((visibility("hidden")))
@interface RAPTransitSubcategoryQuestion : RAPMenuQuestion <RAPQuestionAcceptingAlternatePlace, RAPMenuItem>
{
    id <RAPPlace> _reportedPlace;
    _Bool _showsStationInfoIncorrect;
    _Bool _showsBadDirections;
    NSString *_localizedServerControlledDescription;
}

+ (id)localizedTransitTitle;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedServerControlledDescription; // @synthesize localizedServerControlledDescription=_localizedServerControlledDescription;
- (int)_transitCorrectionTypeForSelectedMenuItem;
- (void)_fillSubmissionParameters:(id)arg1;
- (_Bool)_followUpQuestionIsDirectionsRelated;
- (id)followUpQuestionForCategory:(long long)arg1;
- (_Bool)canDisplayMenuItemForQuestionCategory:(long long)arg1;
- (id)mainMenuQuestionCategories;
@property(readonly, nonatomic) int userAction;
- (int)analyticTarget;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)_initWithReport:(id)arg1 parentQuestion:(id)arg2 place:(id)arg3;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

