//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAddressObjectGeocodingResult, GEOPDAirportEntityPlaceLookupResult, GEOPDAllCollectionsViewResult, GEOPDAutocompleteResult, GEOPDBatchCategoryLookupResult, GEOPDBatchMerchantLookupBrandResult, GEOPDBatchPopularNearbySearchResult, GEOPDBatchReverseGeocodingResult, GEOPDBatchSpatialLookupResult, GEOPDBrandLookupResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDChildPlaceLookupByCategoryResult, GEOPDCollectionSuggestionResult, GEOPDExternalTransitLookupResult, GEOPDFeatureIdGeocodingResult, GEOPDGeocodingResult, GEOPDGroundViewLabelResult, GEOPDIpGeoLookupResult, GEOPDLocationDirectedSearchResult, GEOPDMapsIdentifierPlaceLookupResult, GEOPDMapsSearchHomeResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDPlaceCollectionLookupResult, GEOPDPlaceGlobalCommonResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDPublisherViewResult, GEOPDReverseGeocodingResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult, GEOPDSiriSearchResult, GEOPDTerritoryLookupResult, GEOPDTransitScheduleLookupResult, GEOPDVendorSpecificPlaceRefinementResult, GEOPDWifiFingerprintResult, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAddressObjectGeocodingResult *_addressObjectGeocodingResult;
    GEOPDAirportEntityPlaceLookupResult *_airportEntityPlaceLookupResult;
    GEOPDAllCollectionsViewResult *_allCollectionsViewResult;
    GEOPDAutocompleteResult *_autocompleteResult;
    GEOPDBatchCategoryLookupResult *_batchCategoryLookupResult;
    GEOPDBatchMerchantLookupBrandResult *_batchMerchantLookupBrandResult;
    GEOPDBatchPopularNearbySearchResult *_batchPopularNearbySearchResult;
    GEOPDBatchReverseGeocodingResult *_batchReverseGeocodingResult;
    GEOPDBatchSpatialLookupResult *_batchSpatialLookupResult;
    GEOPDBrandLookupResult *_brandLookupResult;
    GEOPDSearchBrowseCategorySuggestionResult *_browseCategorySuggestionResult;
    GEOPDCanonicalLocationSearchResult *_canonicalSearchResult;
    GEOPDCategorySearchResult *_categorySearchResult;
    GEOPDChildPlaceLookupByCategoryResult *_childPlaceLookupByCategoryResult;
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;
    GEOPDExternalTransitLookupResult *_externalTransitLookupResult;
    GEOPDFeatureIdGeocodingResult *_featureIdGeocodingResult;
    GEOPDGeocodingResult *_geocodingResult;
    GEOPDGroundViewLabelResult *_groundViewLabelResult;
    GEOPDIpGeoLookupResult *_ipGeoLookupResult;
    GEOPDLocationDirectedSearchResult *_locationDirectedSearchResult;
    GEOPDMapsIdentifierPlaceLookupResult *_mapsIdentifierPlaceLookupResult;
    GEOPDMapsSearchHomeResult *_mapsSearchHomeResult;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOPDNearbySearchResult *_nearbySearchResult;
    GEOPDPlaceCollectionLookupResult *_placeCollectionLookupResult;
    GEOPDPlaceGlobalCommonResult *_placeGlobalCommonResult;
    GEOPDPlaceLookupResult *_placeLookupResult;
    GEOPDPlaceRefinementResult *_placeRefinementResult;
    GEOPDPopularNearbySearchResult *_popularNearbySearchResult;
    GEOPDPublisherViewResult *_publisherViewResult;
    GEOPDReverseGeocodingResult *_reverseGeocodingResult;
    GEOPDSearchFieldPlaceholderResult *_searchFieldPlaceholderResult;
    GEOPDSearchResult *_searchResult;
    GEOPDSearchZeroKeywordCategorySuggestionResult *_searchZeroKeywordCategorySuggestionResult;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *_searchZeroKeywordWithSearchResultsSuggestionResult;
    GEOPDSiriSearchResult *_siriSearchResult;
    GEOPDTerritoryLookupResult *_territoryLookupResult;
    GEOPDTransitScheduleLookupResult *_transitScheduleLookupResult;
    GEOPDVendorSpecificPlaceRefinementResult *_vendorSpecificPlaceRefinementResult;
    GEOPDWifiFingerprintResult *_wifiFingerprintResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressObjectGeocodingResult:1;
        unsigned int read_airportEntityPlaceLookupResult:1;
        unsigned int read_allCollectionsViewResult:1;
        unsigned int read_autocompleteResult:1;
        unsigned int read_batchCategoryLookupResult:1;
        unsigned int read_batchMerchantLookupBrandResult:1;
        unsigned int read_batchPopularNearbySearchResult:1;
        unsigned int read_batchReverseGeocodingResult:1;
        unsigned int read_batchSpatialLookupResult:1;
        unsigned int read_brandLookupResult:1;
        unsigned int read_browseCategorySuggestionResult:1;
        unsigned int read_canonicalSearchResult:1;
        unsigned int read_categorySearchResult:1;
        unsigned int read_childPlaceLookupByCategoryResult:1;
        unsigned int read_collectionSuggestionResult:1;
        unsigned int read_externalTransitLookupResult:1;
        unsigned int read_featureIdGeocodingResult:1;
        unsigned int read_geocodingResult:1;
        unsigned int read_groundViewLabelResult:1;
        unsigned int read_ipGeoLookupResult:1;
        unsigned int read_locationDirectedSearchResult:1;
        unsigned int read_mapsIdentifierPlaceLookupResult:1;
        unsigned int read_mapsSearchHomeResult:1;
        unsigned int read_merchantLookupResult:1;
        unsigned int read_nearbySearchResult:1;
        unsigned int read_placeCollectionLookupResult:1;
        unsigned int read_placeGlobalCommonResult:1;
        unsigned int read_placeLookupResult:1;
        unsigned int read_placeRefinementResult:1;
        unsigned int read_popularNearbySearchResult:1;
        unsigned int read_publisherViewResult:1;
        unsigned int read_reverseGeocodingResult:1;
        unsigned int read_searchFieldPlaceholderResult:1;
        unsigned int read_searchResult:1;
        unsigned int read_searchZeroKeywordCategorySuggestionResult:1;
        unsigned int read_searchZeroKeywordWithSearchResultsSuggestionResult:1;
        unsigned int read_siriSearchResult:1;
        unsigned int read_territoryLookupResult:1;
        unsigned int read_transitScheduleLookupResult:1;
        unsigned int read_vendorSpecificPlaceRefinementResult:1;
        unsigned int read_wifiFingerprintResult:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDTerritoryLookupResult *territoryLookupResult;
@property(readonly, nonatomic) _Bool hasTerritoryLookupResult;
@property(retain, nonatomic) GEOPDAirportEntityPlaceLookupResult *airportEntityPlaceLookupResult;
@property(readonly, nonatomic) _Bool hasAirportEntityPlaceLookupResult;
@property(retain, nonatomic) GEOPDAllCollectionsViewResult *allCollectionsViewResult;
@property(readonly, nonatomic) _Bool hasAllCollectionsViewResult;
@property(retain, nonatomic) GEOPDPublisherViewResult *publisherViewResult;
@property(readonly, nonatomic) _Bool hasPublisherViewResult;
@property(retain, nonatomic) GEOPDCollectionSuggestionResult *collectionSuggestionResult;
@property(readonly, nonatomic) _Bool hasCollectionSuggestionResult;
@property(retain, nonatomic) GEOPDMapsSearchHomeResult *mapsSearchHomeResult;
@property(readonly, nonatomic) _Bool hasMapsSearchHomeResult;
@property(retain, nonatomic) GEOPDChildPlaceLookupByCategoryResult *childPlaceLookupByCategoryResult;
@property(readonly, nonatomic) _Bool hasChildPlaceLookupByCategoryResult;
@property(retain, nonatomic) GEOPDBatchMerchantLookupBrandResult *batchMerchantLookupBrandResult;
@property(readonly, nonatomic) _Bool hasBatchMerchantLookupBrandResult;
@property(retain, nonatomic) GEOPDBatchCategoryLookupResult *batchCategoryLookupResult;
@property(readonly, nonatomic) _Bool hasBatchCategoryLookupResult;
@property(retain, nonatomic) GEOPDTransitScheduleLookupResult *transitScheduleLookupResult;
@property(readonly, nonatomic) _Bool hasTransitScheduleLookupResult;
@property(retain, nonatomic) GEOPDPlaceCollectionLookupResult *placeCollectionLookupResult;
@property(readonly, nonatomic) _Bool hasPlaceCollectionLookupResult;
@property(retain, nonatomic) GEOPDPlaceGlobalCommonResult *placeGlobalCommonResult;
@property(readonly, nonatomic) _Bool hasPlaceGlobalCommonResult;
@property(retain, nonatomic) GEOPDBatchSpatialLookupResult *batchSpatialLookupResult;
@property(readonly, nonatomic) _Bool hasBatchSpatialLookupResult;
@property(retain, nonatomic) GEOPDGroundViewLabelResult *groundViewLabelResult;
@property(readonly, nonatomic) _Bool hasGroundViewLabelResult;
@property(retain, nonatomic) GEOPDIpGeoLookupResult *ipGeoLookupResult;
@property(readonly, nonatomic) _Bool hasIpGeoLookupResult;
@property(retain, nonatomic) GEOPDWifiFingerprintResult *wifiFingerprintResult;
@property(readonly, nonatomic) _Bool hasWifiFingerprintResult;
@property(retain, nonatomic) GEOPDBrandLookupResult *brandLookupResult;
@property(readonly, nonatomic) _Bool hasBrandLookupResult;
@property(retain, nonatomic) GEOPDBatchReverseGeocodingResult *batchReverseGeocodingResult;
@property(readonly, nonatomic) _Bool hasBatchReverseGeocodingResult;
@property(retain, nonatomic) GEOPDMapsIdentifierPlaceLookupResult *mapsIdentifierPlaceLookupResult;
@property(readonly, nonatomic) _Bool hasMapsIdentifierPlaceLookupResult;
@property(retain, nonatomic) GEOPDFeatureIdGeocodingResult *featureIdGeocodingResult;
@property(readonly, nonatomic) _Bool hasFeatureIdGeocodingResult;
@property(retain, nonatomic) GEOPDExternalTransitLookupResult *externalTransitLookupResult;
@property(readonly, nonatomic) _Bool hasExternalTransitLookupResult;
@property(retain, nonatomic) GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *searchZeroKeywordWithSearchResultsSuggestionResult;
@property(readonly, nonatomic) _Bool hasSearchZeroKeywordWithSearchResultsSuggestionResult;
@property(retain, nonatomic) GEOPDAddressObjectGeocodingResult *addressObjectGeocodingResult;
@property(readonly, nonatomic) _Bool hasAddressObjectGeocodingResult;
@property(retain, nonatomic) GEOPDNearbySearchResult *nearbySearchResult;
@property(readonly, nonatomic) _Bool hasNearbySearchResult;
@property(retain, nonatomic) GEOPDVendorSpecificPlaceRefinementResult *vendorSpecificPlaceRefinementResult;
@property(readonly, nonatomic) _Bool hasVendorSpecificPlaceRefinementResult;
@property(retain, nonatomic) GEOPDBatchPopularNearbySearchResult *batchPopularNearbySearchResult;
@property(readonly, nonatomic) _Bool hasBatchPopularNearbySearchResult;
@property(retain, nonatomic) GEOPDSearchFieldPlaceholderResult *searchFieldPlaceholderResult;
@property(readonly, nonatomic) _Bool hasSearchFieldPlaceholderResult;
@property(retain, nonatomic) GEOPDSearchZeroKeywordCategorySuggestionResult *searchZeroKeywordCategorySuggestionResult;
@property(readonly, nonatomic) _Bool hasSearchZeroKeywordCategorySuggestionResult;
@property(retain, nonatomic) GEOPDPopularNearbySearchResult *popularNearbySearchResult;
@property(readonly, nonatomic) _Bool hasPopularNearbySearchResult;
@property(retain, nonatomic) GEOPDCategorySearchResult *categorySearchResult;
@property(readonly, nonatomic) _Bool hasCategorySearchResult;
@property(retain, nonatomic) GEOPDSearchBrowseCategorySuggestionResult *browseCategorySuggestionResult;
@property(readonly, nonatomic) _Bool hasBrowseCategorySuggestionResult;
@property(retain, nonatomic) GEOPDAutocompleteResult *autocompleteResult;
@property(readonly, nonatomic) _Bool hasAutocompleteResult;
@property(retain, nonatomic) GEOPDLocationDirectedSearchResult *locationDirectedSearchResult;
@property(readonly, nonatomic) _Bool hasLocationDirectedSearchResult;
@property(retain, nonatomic) GEOPDSiriSearchResult *siriSearchResult;
@property(readonly, nonatomic) _Bool hasSiriSearchResult;
@property(retain, nonatomic) GEOPDPlaceRefinementResult *placeRefinementResult;
@property(readonly, nonatomic) _Bool hasPlaceRefinementResult;
@property(retain, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property(readonly, nonatomic) _Bool hasMerchantLookupResult;
@property(retain, nonatomic) GEOPDPlaceLookupResult *placeLookupResult;
@property(readonly, nonatomic) _Bool hasPlaceLookupResult;
@property(retain, nonatomic) GEOPDReverseGeocodingResult *reverseGeocodingResult;
@property(readonly, nonatomic) _Bool hasReverseGeocodingResult;
@property(retain, nonatomic) GEOPDCanonicalLocationSearchResult *canonicalSearchResult;
@property(readonly, nonatomic) _Bool hasCanonicalSearchResult;
@property(retain, nonatomic) GEOPDGeocodingResult *geocodingResult;
@property(readonly, nonatomic) _Bool hasGeocodingResult;
@property(retain, nonatomic) GEOPDSearchResult *searchResult;
@property(readonly, nonatomic) _Bool hasSearchResult;
- (id)initWithData:(id)arg1;
- (id)init;

@end

