//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViceroyTrace/VCAggregator.h>

#import <ViceroyTrace/VCAdaptiveLearningDelegate-Protocol.h>

@class CallSegment, NSString, VCAdaptiveLearning, VCHistogram;

__attribute__((visibility("hidden")))
@interface VCAggregatorFaceTime : VCAggregator <VCAdaptiveLearningDelegate>
{
    NSString *_remoteInterfaceType;
    NSString *_currentSegmentKey;
    NSString *_lastSegmentKey;
    NSString *_relayServer;
    int _relayType;
    NSString *_accessToken;
    NSString *_remoteOSBuild;
    CallSegment *_currentSegment;
    unsigned int _currentWidth;
    _Bool _currentDegradedVideoState;
    double _degradedVideoStartTime;
    double _degradedVideoDuration;
    _Bool _currentNoRemoteState;
    double _noRemoteStartTime;
    unsigned int _vcrcProfileNumber;
    int _callTotalDurationTicks;
    int _callAggregatedDurationTicks;
    double _callAverageAudioErasuresRate;
    double _callAverageTargetBitrate;
    double _callAverageSendBitrate;
    double _callAverageReceiveBitrate;
    int _callMaxAudioErasureCount;
    int _callMaxVideoStallCount;
    double _callAverageJitterBufferDelay;
    int _targetJBSizeChanges;
    int _maxTargetJBSizeChanges;
    int _minVideoFrameRate;
    int _accumVideoFrameErasureCount;
    int _maxVideoFrameErasureCount;
    unsigned int _averageJitterQueueSize;
    unsigned int _averageJitterQueueSizeChanges;
    unsigned int _maxJitterQueueSize;
    double _timeWeightedJitterQueueSize;
    VCHistogram *_WANVJBQSize;
    VCHistogram *_JBQSizeDeltaVidLarger;
    VCHistogram *_JBQSizeDeltaAudLarger;
    double _callAverageTotalVideoSendBitrate;
    double _callAverageVideoMediaSendBitrate;
    double _callAverageVideoHeaderSendBitrate;
    double _callAverageVideoFECSendBitrate;
    double _callAverageTotalVideoRecvBitrate;
    double _callAverageRTT;
    double _callAverageAbnormalRTT;
    unsigned int _callAbnormalRTTCount;
    double _callAverageAbnormalPLR;
    unsigned int _callAbnormalPLRCount;
    double _callAverageAbnormalBPL;
    unsigned int _callAbnormalBPLCount;
    double _callPoorConnectionTotalLength;
    double _callPoorConnectionMaxLength;
    unsigned int _callPoorConnectionFrequency;
    double _callTotalVideoStallTime;
    double _callTotalMediaStallTime;
    double _callMaxMediaStallTime;
    double _callMaxVideoStallInterval;
    double _callTotalAudioStallTime;
    double _callMaxAudioStallInterval;
    double _lastReportedAudioStallTime;
    double _lastReportedVideoStallTime;
    double _lastReportedMediaStallTime;
    double _callLastVideoResolutionChangeTime;
    unsigned int _noRemoteAtCallEnd;
    unsigned int _callTotalMediaStallCount;
    unsigned int _remoteNoRemoteAtCallEnd;
    unsigned int _totalConnectionTime;
    unsigned int _startConnectionTime;
    unsigned int _transportConnectionTime;
    unsigned int _mediaConnectionTime;
    unsigned int _callMode;
    unsigned int _callDeviceRole;
    unsigned int _callTransportType;
    unsigned int _callErrorCode;
    unsigned int _callDetailedErrorCode;
    unsigned int _numberOfSegments;
    unsigned int _REDState;
    unsigned char _wifiAssistState;
    unsigned long long _lastReportedAudioPacketSent;
    unsigned long long _lastReportedVideoPacketSent;
    unsigned int _lastReportedAudioPacketRecv;
    unsigned long long _VPLRAccumulator;
    unsigned int _initialRampUpTime;
    int _initialBitrateDelta;
    int _initialBitrate;
    unsigned int _significantOOOPacketCount;
    unsigned int _totalVideoPacketsExpected;
    unsigned int _totalFIRDemandCounter;
    unsigned int _totalFIRCounter;
    unsigned int _videoFrameDecodedButSkippedCounter;
    unsigned int _videoFrameIncompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _videoFrameReceivedCounter;
    unsigned int _videoFrameExpectedCounter;
    unsigned int _videoFrameNonFECTotalCounter;
    unsigned int _videoFrameNonFECCompleteCounter;
    unsigned int _encodedVideoFrameCounter;
    unsigned int _captureVideoFrameCounter;
    unsigned int _overshootSendBitrate;
    unsigned int _undershootSendBitrate;
    unsigned int _overUtilizedBandwidth;
    unsigned int _underUtilizedBandwidth;
    unsigned int _negotiatedSwitches;
    unsigned int _remoteSwitches;
    unsigned int _lastReportedTotalCellDupTxDataBytes;
    unsigned int _lastReportedTotalCellDupRxDataBytes;
    unsigned int _lastReportedTotalUsedCellBudgetTxDataBytes;
    unsigned int _lastReportedTotalUsedCellBudgetRxDataBytes;
    unsigned int _lastReportedMBLRampDownCount;
    unsigned int _lastReportedSuddenBandwidthDropCount;
    unsigned char _duplicationType;
    unsigned long long _lastReportedTotalCellTxDataBytes;
    unsigned long long _lastReportedTotalCellRxDataBytes;
    unsigned long long _lastReportedTotalWifiTxDataBytes;
    unsigned long long _lastReportedTotalWifiRxDataBytes;
    unsigned int _totalDuplicationDuration;
    unsigned int _wifiToCellHandoverCount;
    unsigned int _cellToWifiHandoverCount;
    _Bool _isDuplicationEnabled;
    _Bool _remoteFaceTimeSwitchesAvailable;
    double _duplicationStartTime;
    unsigned int _evictedFramesLikelyRecoverableCount;
    unsigned int _evictedFramesTrackedCount;
    unsigned int _evictedFramesAnalysisValidIntervals;
    double _evictedFramesAverageLatePacketDelay;
    unsigned int _fecProcessingTime;
    VCHistogram *_lossPattern;
    double _primaryConnHealthAllowedDelay;
    unsigned int _linkProbingVersion;
    unsigned int _remoteLinkProbingVersion;
    unsigned int _localAlertStateSwitchCount;
    unsigned int _remoteAlertStateSwitchCount;
    double _lastLocalAlertTime;
    double _lastRemoteAlertTime;
    _Bool _localAlertActive;
    _Bool _remoteAlertActive;
    unsigned int _dynamicDupeLinkCount;
    double _rttMeanTotalDelta;
    unsigned char _plrTierTotalDelta;
    unsigned int _isVPCEnabled;
    double _minVPCProcessingTime;
    double _maxVPCProcessingTime;
    double _averageVPCProcessingTimeSum;
    unsigned int _averageVPCProcessingTimeCounter;
    VCHistogram *_callVideoSwitchPeriodHistogram;
    VCAdaptiveLearning *_adaptiveLearning;
    unsigned long long _localWRMDuplicationSwitchCount;
    unsigned long long _remoteWRMDuplicationSwitchCount;
}

@property(readonly) VCHistogram *JBQSizeDeltaAudLarger; // @synthesize JBQSizeDeltaAudLarger=_JBQSizeDeltaAudLarger;
@property(readonly) VCHistogram *JBQSizeDeltaVidLarger; // @synthesize JBQSizeDeltaVidLarger=_JBQSizeDeltaVidLarger;
@property(readonly) VCHistogram *WANVJBQSize; // @synthesize WANVJBQSize=_WANVJBQSize;
- (int)initialSettledBitrate;
- (int)shortTermAverageBWEForSegment:(id)arg1;
- (int)longTermAverageBWEForSegment:(id)arg1;
- (int)shortTermAverageSARBRForSegment:(id)arg1;
- (int)longTermAverageSARBRForSegment:(id)arg1;
- (int)shortTermAverageSATXBRForSegment:(id)arg1;
- (int)longTermAverageSATXBRForSegment:(id)arg1;
- (int)previousISBRForSegment:(id)arg1;
- (int)shortTermAverageISBRForSegment:(id)arg1;
- (int)longTermAverageISBRForSegment:(id)arg1;
- (int)shortTermAverageTBRForSegment:(id)arg1;
- (int)longTermAverageTBRForSegment:(id)arg1;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;
- (int)adaptiveLearningState;
- (void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3;
- (void)updateVPCStatus:(id)arg1;
- (void)updateBitrateCap:(id)arg1;
- (void)updateCellTech:(id)arg1;
- (_Bool)isDuplicationChangedForEventType:(unsigned short)arg1;
- (void)updatePrimaryConnHealthAllowedDelay:(double)arg1;
- (void)updateVCRCProfileNumber:(unsigned int)arg1;
- (void)updateNetworkStats:(unsigned int)arg1 payload:(id)arg2;
- (void)updateAlgoMetrics:(unsigned int)arg1;
- (void)updateWRMMetrics:(unsigned int)arg1 payload:(id)arg2;
- (void)updateLinkProbingStats:(unsigned int)arg1 payload:(id)arg2;
- (void)updateSwitchConfiguration:(unsigned int)arg1 payload:(id)arg2;
- (void)updateAdaptiveLearningStats:(unsigned int)arg1 payload:(id)arg2;
- (void)updateVideoSwitchTimes;
- (void)updateVideoQualityWithPayload:(id)arg1;
- (void)updateConnectionTimes:(id)arg1;
- (void)updateRelayInfo:(id)arg1;
- (void)updateNoRemoteState:(_Bool)arg1;
- (void)updateConnectionTelemetry:(id)arg1;
- (void)updateErrorCode:(id)arg1;
- (void)updateRoleModeTransport:(unsigned short)arg1 deviceRole:(unsigned short)arg2 transportType:(unsigned short)arg3;
- (void)updatePauseVideo:(_Bool)arg1;
- (void)updateVideoResolution:(id)arg1;
- (void)updateVideoFECStats:(id)arg1;
- (void)updateRTStats:(id)arg1;
- (void)updateVPCStats:(id)arg1;
- (void)startNewSegment;
- (id)duplicationIndicator;
- (_Bool)isLocalInterfaceTypeForSegment:(id)arg1 equalTo:(id)arg2;
- (void)reset;
- (void)flushCurrentSegment;
- (id)aggregatedSessionReport;
- (id)aggregatedCallReports;
- (void)addVPCTelemetry:(id)arg1;
- (id)aggregatedSegmentQRReport;
- (id)aggregatedSegmentReport:(int)arg1;
- (void)saveCallSegmentHistory;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

