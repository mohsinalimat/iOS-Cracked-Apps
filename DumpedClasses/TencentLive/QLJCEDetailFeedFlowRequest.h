//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEDetailFeedFlowRequest : JceObjectV2
{
    int jcev2_p_3_o_filtertype;
    NSString *jcev2_p_0_r_dataKey;
    NSString *jcev2_p_1_r_pageContext;
    NSString *jcev2_p_2_o_refreshContext;
    NSString *jcev2_p_4_o_reportContext;
    NSString *jcev2_p_5_o_vid;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_5_o_vid; // @synthesize jcev2_p_5_o_vid;
@property(retain, nonatomic, getter=jce_reportContext, setter=setJce_reportContext:) NSString *jcev2_p_4_o_reportContext; // @synthesize jcev2_p_4_o_reportContext;
@property(nonatomic, getter=jce_filtertype, setter=setJce_filtertype:) int jcev2_p_3_o_filtertype; // @synthesize jcev2_p_3_o_filtertype;
@property(retain, nonatomic, getter=jce_refreshContext, setter=setJce_refreshContext:) NSString *jcev2_p_2_o_refreshContext; // @synthesize jcev2_p_2_o_refreshContext;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_1_r_pageContext; // @synthesize jcev2_p_1_r_pageContext;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_0_r_dataKey; // @synthesize jcev2_p_0_r_dataKey;
- (void).cxx_destruct;
- (id)init;

@end

