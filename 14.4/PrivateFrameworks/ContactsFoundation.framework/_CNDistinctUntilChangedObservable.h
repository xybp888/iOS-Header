//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;

@interface _CNDistinctUntilChangedObservable : CNObservable
{
    id <CNObservable> _observable;
    id _lastObservedResult;
}

- (void).cxx_destruct;
- (_Bool)_resultIsDistinctFromLastResult:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;

@end

