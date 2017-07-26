//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@class MTNetLog, NSMutableData, NSURLConnection, NSURLRequest, NSURLResponse;

@interface MTURLProtocol : NSURLProtocol
{
    NSURLRequest *_proxyRequest;
    NSURLResponse *_proxyResponse;
    NSURLConnection *_connection;
    MTNetLog *_log;
    double _startTime;
    unsigned long long _dataSize;
    NSMutableData *_data;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)isH5CompatibleEnable;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property double startTime; // @synthesize startTime=_startTime;
@property(retain) MTNetLog *log; // @synthesize log=_log;
@property(retain) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain) NSURLResponse *proxyResponse; // @synthesize proxyResponse=_proxyResponse;
@property(retain) NSURLRequest *proxyRequest; // @synthesize proxyRequest=_proxyRequest;
- (void).cxx_destruct;
- (void)logHttpEndWithStatus:(id)arg1;
- (void)logHttpStartLoading;
- (_Bool)shouldReturnRequest;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (id)request;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end
