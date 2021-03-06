//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject
{
    NSMutableDictionary *_formattersForKey;
}

+ (id)_siriPersonalRequestsFormatter;
+ (id)_siriOutputVoiceFormatter;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)defaultFactory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *formattersForKey; // @synthesize formattersForKey=_formattersForKey;
- (id)_buildFormatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1 copy:(_Bool)arg2;
- (id)init;

@end

