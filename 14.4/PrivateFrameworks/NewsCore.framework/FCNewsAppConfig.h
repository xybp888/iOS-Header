//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCoreConfiguration-Protocol.h>
#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>
#import <NewsCore/FCNewsAppConfiguration-Protocol.h>

@class FCForYouGroupsConfiguration, FCIAdConfiguration, FCNotificationsConfiguration, FCPaidBundleConfiguration, FCPersonalizationTreatment, FCPrefetchConfiguration, FCTopStoriesConfiguration, FCVideoGroupsConfig, FCWidgetConfig, NSArray, NSDate, NSDictionary, NSNumber, NSString, NTPBDiscoverMoreVideosInfo;

@interface FCNewsAppConfig : NSObject <FCNewsAppConfiguration, FCCoreConfiguration, FCJSONEncodableObjectProviding>
{
    _Bool _privateDataEncryptionAllowed;
    _Bool _privateDataEncryptionMigrationDesired;
    _Bool _privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
    _Bool _privateDataMigrationCleanupEnabled;
    _Bool _privateDataShouldSecureSubscriptions;
    _Bool _privateDataEncryptionRequired;
    FCVideoGroupsConfig *_forYouVideoGroupsConfig;
    NSDictionary *_endpointConfigsByEnvironment;
    FCNotificationsConfiguration *_notificationsConfig;
    FCTopStoriesConfiguration *_topStoriesConfig;
    FCForYouGroupsConfiguration *_forYouGroupsConfiguration;
    FCIAdConfiguration *_iAdConfig;
    FCPrefetchConfiguration *_prefetchConfig;
    NTPBDiscoverMoreVideosInfo *_shareDiscoverMoreVideosInfo;
    NSDictionary *_channelUpsellConfigsByChannelID;
    FCPaidBundleConfiguration *_paidBundleConfig;
    NSString *_myMagazinesTagID;
    NSDictionary *_configDictionary;
    NSString *_storefrontID;
    NSDictionary *_languageConfigDictionary;
    NSDate *_lastModificationDate;
    FCPersonalizationTreatment *_cachedPersonalizationTreatment;
    NSArray *_externalAnalyticsConfigurations;
    NSDictionary *_analyticsContentTypeConfigsByContentTypeByEnvironment;
    FCWidgetConfig *_widgetConfig;
    NSDictionary *_cachedPaidALaCartePaywallConfigs;
}

+ (id)defaultPaidEvergreenArticleListIDByLocalizedStorefrontID;
+ (id)defaultFreeEvergreenArticleListIDByLocalizedStorefrontID;
+ (id)defaultAudioConfigRecordIDByLocalizedStorefrontID;
+ (id)defaultMagazinesConfigRecordIDByLocalizedStorefrontID;
+ (id)defaultWidgetRecordConfigIDByLocalizedStorefrontID;
+ (id)defaultForYouPremiumRecordConfigIDByLocalizedStorefrontID;
+ (id)defaultForYouRecordConfigIDByLocalizedStorefrontID;
+ (id)overrideWidgetSectionConfigID;
+ (id)overrideForYouPremiumConfigID;
+ (id)overrideForYouConfigID;
+ (id)languageConfigDictionaryForConfig:(id)arg1 preferredLanguageTags:(id)arg2;
+ (id)configurationWithData:(id)arg1 storefrontID:(id)arg2 preferredLanguageTags:(id)arg3;
+ (id)defaultConfigurationForStoreFrontID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *cachedPaidALaCartePaywallConfigs; // @synthesize cachedPaidALaCartePaywallConfigs=_cachedPaidALaCartePaywallConfigs;
@property(readonly, nonatomic) FCWidgetConfig *widgetConfig; // @synthesize widgetConfig=_widgetConfig;
@property(readonly, nonatomic) NSDictionary *analyticsContentTypeConfigsByContentTypeByEnvironment; // @synthesize analyticsContentTypeConfigsByContentTypeByEnvironment=_analyticsContentTypeConfigsByContentTypeByEnvironment;
@property(retain, nonatomic) NSArray *externalAnalyticsConfigurations; // @synthesize externalAnalyticsConfigurations=_externalAnalyticsConfigurations;
@property(readonly, nonatomic) FCPersonalizationTreatment *cachedPersonalizationTreatment; // @synthesize cachedPersonalizationTreatment=_cachedPersonalizationTreatment;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) NSDictionary *languageConfigDictionary; // @synthesize languageConfigDictionary=_languageConfigDictionary;
@property(readonly, copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(readonly, nonatomic) NSDictionary *configDictionary; // @synthesize configDictionary=_configDictionary;
@property(readonly, nonatomic) NSDictionary *channelUpsellConfigsByChannelID; // @synthesize channelUpsellConfigsByChannelID=_channelUpsellConfigsByChannelID;
- (id)localizedStorefrontID;
- (id)jsonEncodableObject;
@property(readonly, nonatomic) _Bool adImpressionTrackingEnabled;
@property(readonly, nonatomic) _Bool adInstrumentationEnabled;
@property(readonly, nonatomic) NSArray *searchConfigurationProfiles;
@property(readonly, nonatomic) _Bool useNewSearchEndpoint;
@property(readonly, nonatomic) _Bool checkForPaywallConfigChangesEnabled;
@property(readonly, nonatomic) _Bool newNotificationHandlingEnabled;
@property(readonly, nonatomic) _Bool xavierEnabled;
@property(readonly, nonatomic) _Bool newPersonalizationEnabled;
@property(readonly, nonatomic) _Bool newAdsEnabled;
@property(readonly, nonatomic) _Bool searchFeedEnabled;
@property(readonly, nonatomic) _Bool tagFeedEnabled;
@property(readonly, nonatomic) _Bool todayFeedEnabled;
@property(readonly, nonatomic) _Bool forYouGroupShouldPromoteAccessibleHeadline;
@property(readonly, nonatomic) _Bool recordBothPersonalizationVectors;
@property(readonly, nonatomic) _Bool usePersonalizationVectorAlt;
@property(readonly, nonatomic) _Bool enableLocationBasedAutofavorites;
@property(readonly, nonatomic) long long newsletterSubscriptionType;
@property(readonly, nonatomic) double newsletterSubscriptionStatusCacheTimeout;
@property(readonly, nonatomic) long long emailSignupRequiredAppLaunchCount;
@property(readonly, nonatomic) unsigned long long bestOfBundleFeedGroupKind;
@property(readonly, nonatomic) unsigned long long likeDislikeBehavior;
@property(readonly, nonatomic) long long maximumTrendingGroupSizeiPhone;
@property(readonly, nonatomic) long long maximumTrendingGroupSizeiPad;
@property(readonly, nonatomic) long long feedContentExposureTestMaximumInterval;
@property(readonly, nonatomic) long long criticalStorageThreshold;
@property(readonly, nonatomic) long long lowStorageThreshold;
@property(readonly, nonatomic, getter=isArticleToolbarCompressionEnabled) _Bool articleToolbarCompressionEnabled;
@property(readonly, nonatomic) NSString *magazinesConfigRecordID;
@property(readonly, nonatomic) FCPaidBundleConfiguration *paidBundleConfig; // @synthesize paidBundleConfig=_paidBundleConfig;
@property(readonly, nonatomic) _Bool enableBadgeInSpotlightTabBar;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *feedNavigationConfigJSON;
@property(readonly, nonatomic) _Bool shouldShowAlternateHeadlines;
@property(readonly, nonatomic) _Bool disableThumbnailsForArticleRecirculation;
@property(readonly, nonatomic) long long articleRecirculationPopularFeedQueryTimeRange;
@property(readonly, nonatomic) NSString *articleRecirculationComponentPlacementConfigJSON;
@property(readonly, nonatomic) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo; // @synthesize shareDiscoverMoreVideosInfo=_shareDiscoverMoreVideosInfo;
@property(readonly, nonatomic) NSString *issueArticleRecirculationConfigJSON;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) unsigned long long trendingStyle;
@property(readonly, copy, nonatomic) NSArray *topStoriesPublishDates;
@property(readonly, nonatomic) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(readonly, nonatomic) long long autoRefreshMinimumInterval;
@property(readonly, nonatomic) _Bool stateRestorationOniPhoneEnabled;
@property(readonly, nonatomic) long long stateRestorationAllowedTimeWindow;
@property(readonly, nonatomic) NSArray *mediaSharingBlacklistedChannelIDs;
@property(readonly, nonatomic) NSString *exploreArticleID;
@property(readonly, nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForSingleArticle;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForArticleList;
@property(readonly, nonatomic) long long articleReadCountThreshold;
@property(readonly, nonatomic) NSString *userVectorModelResourceId;
@property(readonly, nonatomic) NSString *userVectorWhitelistResourceId;
@property(readonly, nonatomic) NSString *translationMapResourceID;
@property(readonly, nonatomic) NSString *tagFeedLayoutConfigurationResourceId;
@property(readonly, nonatomic) NSString *localAreasMappingResourceId;
@property(readonly, nonatomic) NSString *personalizationFavorabilityResourceId;
@property(readonly, nonatomic) NSString *personalizationWhitelistResourceId;
@property(readonly, nonatomic) NSString *personalizationUrlMappingResourceId;
@property(readonly, nonatomic) NSString *personalizationBundleIdMappingResourceId;
@property(readonly, nonatomic) long long analyticsEndpointMaxPayloadSize;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationStart;
@property(readonly, nonatomic) long long widgetSystemReloadJitterMaxHoneymoon;
@property(readonly, nonatomic) long long widgetSystemReloadIntervalHoneymoon;
@property(readonly, nonatomic) long long widgetSystemHoneymoonDuration;
@property(readonly, nonatomic) long long widgetSystemReloadJitterMax;
@property(readonly, nonatomic) long long widgetSystemReloadInterval;
@property(readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property(readonly, nonatomic) NSString *widgetConfigID;
@property(readonly, nonatomic) double parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor;
@property(readonly, nonatomic) _Bool universalLinksEnabled;
@property(readonly, nonatomic) NSString *embedConfigurationAssetID;
@property(readonly, nonatomic) _Bool notificationAssetPrefetchingRequiresWatch;
@property(readonly, nonatomic) _Bool notificationEnableAssetPrefetching;
@property(readonly, nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property(readonly, nonatomic) long long notificationArticleCacheTimeout;
@property(readonly, nonatomic) long long newFavoriteNotificationAlertsFrequency;
@property(readonly, nonatomic) FCPrefetchConfiguration *prefetchConfig; // @synthesize prefetchConfig=_prefetchConfig;
@property(readonly, nonatomic) FCIAdConfiguration *iAdConfig; // @synthesize iAdConfig=_iAdConfig;
@property(readonly, nonatomic) double tileProminenceScoreBalanceValue;
@property(readonly, nonatomic) _Bool userSegmentationInWidgetAllowed;
@property(readonly, nonatomic) _Bool widgetAnalyticsEnabled;
@property(readonly, nonatomic) _Bool widgetContentPrefetchEnabled;
@property(readonly, nonatomic) long long articleAdPrefetchLimit;
@property(readonly, nonatomic) long long feedAdScreenfulsToPrefetch;
@property(readonly, nonatomic) double nativeInArticleAdRequestThrottle;
@property(readonly, nonatomic) double nativeInFeedAdRequestThrottle;
@property(readonly, nonatomic) double prerollAdRequestThrottle;
@property(readonly, nonatomic) double interstitialAdRequestThrottle;
@property(readonly, nonatomic) double articleBannerAdRequestThrottle;
@property(readonly, nonatomic) double feedBannerAdRequestThrottle;
@property(readonly, nonatomic) double prerollLoadingTimeout;
@property(readonly, nonatomic) double interstitialAdLoadDelay;
@property(readonly, nonatomic) NSString *anfRenderingConfiguration;
@property(readonly, nonatomic) NSString *webEmbedContentBlockerOverrides;
@property(readonly, nonatomic) NSString *webEmbedContentBlockers;
@property(readonly, nonatomic) long long autoScrollToTopFeedTimeout;
@property(readonly, nonatomic) NSArray *discoverNewsPlusChannelIDs;
@property(readonly, nonatomic) NSArray *onboardingFeedIDs;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) long long maximumRetryAfterForCK;
@property(readonly, nonatomic) _Bool enableCacheFallbackForArticleRecirculation;
@property(readonly, nonatomic) long long entitlementsCacheRecoveryAttemptDurationInSeconds;
@property(readonly, nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property(readonly, nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay;
@property(readonly, nonatomic) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property(readonly, nonatomic) double delayBeforeRetryingDroppedFeeds;
@property(readonly, nonatomic) long long maxRetriesForDroppedFeeds;
- (id)appAnalyticsEndpointUrlForEnvironment:(unsigned long long)arg1;
- (id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
@property(readonly, nonatomic) long long widgetForYouBackgroundMinimumUpdateInterval;
- (id)todayConfigWithIdentifier:(id)arg1 queueConfigs:(id)arg2 backgroundColorLight:(id)arg3 backgroundColorDark:(id)arg4 audioIndicatorColor:(id)arg5;
- (id)personalizationTreatment;
@property(readonly, nonatomic) long long singleChannelFeedMinFeedItemsPerRequest;
@property(readonly, nonatomic) long long singleTopicFeedMinFeedItemsPerRequest;
@property(readonly, nonatomic) long long expirePinnedArticlesAfter;
@property(readonly, nonatomic) NSNumber *currentTreatment;
- (id)expFieldForKey:(id)arg1;
@property(readonly, nonatomic) NSString *conversionCohortsExpField;
@property(readonly, nonatomic) NSString *engagementCohortsExpField;
@property(readonly, nonatomic) NSString *experimentalizableFieldPostfix;
@property(readonly, nonatomic) long long forYouMaxDailyEvergreenArticlesForPaidUsers;
@property(readonly, nonatomic) long long forYouMaxDailyEvergreenArticlesForFreeUsers;
@property(readonly, nonatomic) NSString *paidEvergreenArticleListID;
@property(readonly, nonatomic) NSString *freeEvergreenArticleListID;
@property(readonly, nonatomic) NSString *audioConfigRecordID;
@property(readonly, nonatomic) _Bool premiumTodayFeedEnabled;
@property(readonly, nonatomic) NSString *forYouPremiumRecordConfigID;
@property(readonly, nonatomic) NSString *forYouRecordConfigID;
@property(readonly, nonatomic) long long minimumDistanceBetweenImageOnTopTiles;
@property(readonly, nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount;
@property(readonly, nonatomic) double endOfArticleMinPaidHeadlineRatio;
@property(readonly, copy, nonatomic) FCVideoGroupsConfig *forYouVideoGroupsConfig; // @synthesize forYouVideoGroupsConfig=_forYouVideoGroupsConfig;
@property(readonly, nonatomic) double minimumTrendingUnseenRatio;
@property(readonly, nonatomic) long long optionalTopStoriesRefreshRate;
@property(readonly, nonatomic) _Bool diversifyOptionalTopStories;
@property(readonly, nonatomic) long long maximumPaidSubscriptionGroupSizeiPhone;
@property(readonly, nonatomic) long long maximumPaidSubscriptionGroupSizeiPad;
@property(readonly, nonatomic) long long maximumTimesHeadlineInPaidSubscriptionGroup;
@property(readonly, nonatomic) long long maximumNumberOfExpiredPaidSubscriptionGroups;
@property(readonly, nonatomic) long long expiredPaidSubscriptionGroupCutoffTime;
@property(readonly, nonatomic) long long minimumDurationBetweenTrendingGroupsWeekend;
@property(readonly, nonatomic) long long minimumDurationBetweenTrendingGroupsWeekday;
@property(readonly, nonatomic) long long minimumDurationBetweenForYouGroupsWeekend;
@property(readonly, nonatomic) long long minimumDurationBetweenForYouGroupsWeekday;
@property(readonly, nonatomic) FCForYouGroupsConfiguration *forYouGroupsConfiguration; // @synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration;
@property(readonly, nonatomic) NSArray *hiddenFeedIDs;
@property(readonly, nonatomic) long long articleRapidUpdatesTimeout;
@property(readonly, nonatomic) NSString *todayFeedKnobs;
- (id)paidALaCartePaywallConfigForChannelID:(id)arg1;
@property(readonly, nonatomic) NSArray *aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
@property(readonly, nonatomic) double feedLineHeightMultiplier;
@property(readonly, nonatomic) NSString *editorialGemsSectionID;
@property(readonly, nonatomic) NSString *spotlightChannelID;
@property(readonly, nonatomic) NSString *editorialChannelID;
@property(readonly, nonatomic) NSString *myMagazinesTagID; // @synthesize myMagazinesTagID=_myMagazinesTagID;
@property(readonly, nonatomic) NSString *savedStoriesTagID;
@property(readonly, nonatomic) NSString *featuredStoriesTagID;
@property(readonly, nonatomic) NSString *trendingTagID;
@property(readonly, nonatomic) NSString *briefingsTagID;
@property(readonly, nonatomic) NSString *breakingNewsChannelID;
@property(readonly, nonatomic) FCTopStoriesConfiguration *topStoriesConfig; // @synthesize topStoriesConfig=_topStoriesConfig;
@property(readonly, nonatomic) NSDictionary *endpointConfigsByEnvironment; // @synthesize endpointConfigsByEnvironment=_endpointConfigsByEnvironment;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionRequired) _Bool privateDataEncryptionRequired; // @synthesize privateDataEncryptionRequired=_privateDataEncryptionRequired;
@property(readonly, nonatomic) _Bool privateDataShouldSecureSubscriptions; // @synthesize privateDataShouldSecureSubscriptions=_privateDataShouldSecureSubscriptions;
@property(readonly, nonatomic, getter=isPrivateDataMigrationCleanupEnabled) _Bool privateDataMigrationCleanupEnabled; // @synthesize privateDataMigrationCleanupEnabled=_privateDataMigrationCleanupEnabled;
@property(readonly, nonatomic) _Bool privateDataEncryptionMigrationRequiresAllDevicesRunningTigris; // @synthesize privateDataEncryptionMigrationRequiresAllDevicesRunningTigris=_privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionMigrationDesired) _Bool privateDataEncryptionMigrationDesired; // @synthesize privateDataEncryptionMigrationDesired=_privateDataEncryptionMigrationDesired;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionAllowed) _Bool privateDataEncryptionAllowed; // @synthesize privateDataEncryptionAllowed=_privateDataEncryptionAllowed;
@property(readonly, nonatomic) _Bool useSecureConnectionForAssets;
@property(readonly, nonatomic) NSArray *permanentChannelIDs;
@property(readonly, nonatomic) NSArray *presubscribedFeedIDs;
@property(readonly, nonatomic) long long subscriptionsGlobalMeteredCount;
@property(readonly, nonatomic) long long savedArticlesMaximumCountCellular;
@property(readonly, nonatomic) long long savedArticlesMaximumCountWiFi;
@property(readonly, nonatomic) long long savedArticlesOpenedCutoffTime;
@property(readonly, nonatomic) long long savedArticlesCutoffTime;
@property(readonly, nonatomic) long long notificationEnabledChannelsRefreshFrequency;
@property(readonly, nonatomic) FCNotificationsConfiguration *notificationsConfig; // @synthesize notificationsConfig=_notificationsConfig;
@property(readonly, nonatomic) long long dailyChannelUpsellsCountLimit;
@property(readonly, nonatomic, getter=isOrderFeedEndpointEnabled) _Bool orderFeedEndpointEnabled;
@property(readonly, nonatomic) _Bool alternateUniversalLinksEnabledDefaultForFamilyMember;
@property(readonly, nonatomic) _Bool alternateUniversalLinksEnabledDefaultForPurchaser;
@property(readonly, nonatomic) long long alternateUniversalLinksBannerPresentationCount;
@property(readonly, nonatomic) long long alternateUniversalLinksResourceRefreshRate;
@property(readonly, nonatomic) NSString *alternateUniversalLinksResourceID;
@property(readonly, nonatomic) long long trendingTopicsRefreshRate;
@property(readonly, nonatomic) long long appConfigRefreshRate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadPaidBundleConfigurationForStorefrontID:(id)arg1;
- (void)_loadChannelUpsellConfigurations;
- (void)_loadWidgetConfiguration;
- (void)_loadDiscoverMoreVideosConfiguration;
- (void)_loadPrefetchConfiguration;
- (void)_loadiAdConfiguration;
- (void)_loadForYouGroupsConfiguration;
- (void)_loadTopStoriesConfiguration;
- (void)_loadNotificationsConfiguration;
- (void)_loadEndpointConfiguration;
- (void)_loadPrivateDataEncryptionConfiguration;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 languageConfigDictionary:(id)arg3 lastModificationDate:(id)arg4;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 languageConfigDictionary:(id)arg3;
@property(readonly, nonatomic) _Bool isDefaultConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

