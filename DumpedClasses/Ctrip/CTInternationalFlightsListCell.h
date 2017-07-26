//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightImageView, CTIntFlightListBaseCacheBean, CTIntlFlightSegmentListViewModel, NSIndexPath, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CTInternationalFlightsListCell : UITableViewCell
{
    UIView *highlightBackView_;
    UIImageView *iv;
    _Bool _isSelectedCell;
    NSIndexPath *_indexPath;
    CTIntlFlightSegmentListViewModel *_segmentModel;
    CTIntFlightListBaseCacheBean *_listCacheBean;
    UIImageView *_backgroundImage;
    UILabel *_departArriveTimeLB;
    UILabel *_arriveTimeLB;
    UILabel *_currencyLB;
    UILabel *_priceLB;
    UILabel *_labelRoundTrip;
    UILabel *_crossFont;
    UILabel *_tax;
    UILabel *_taxCurrency;
    UILabel *_taxFont;
    UILabel *_ticketsAmountLB;
    UILabel *_firstDepartAirportLB;
    UILabel *_secondArriveAirportLB;
    CTFlightImageView *_airCompanyIcon;
    UILabel *_firstClassLB;
    UILabel *_airlineTime;
    UILabel *_stopCityLB;
    UIImageView *_cityLineImageView;
    UILabel *_operationNoticeLabel;
    UILabel *_crossDay;
    NSLayoutConstraint *_wConstForLabelDepartTime;
    NSLayoutConstraint *_hConstForLabelDepartTime;
    NSLayoutConstraint *_wConstForTicketNumber;
    NSLayoutConstraint *_hConstForTicketNumber;
    NSLayoutConstraint *_bConstForLabelClass;
    NSLayoutConstraint *_tConstForLabelDepartTime;
    NSLayoutConstraint *_tConstForImageArrow;
    NSLayoutConstraint *_tConstForDepartAirport;
    NSLayoutConstraint *_wConstForLabelRoundTrip;
    NSLayoutConstraint *_hConstForLabelRoundTrip;
    NSLayoutConstraint *_wConstForDepAirport;
    NSLayoutConstraint *_hConstForDepAirport;
    NSLayoutConstraint *_wConstForArrAirport;
    NSLayoutConstraint *_hConstForArrAirport;
    UIView *_viewTagStudent;
    UILabel *_iTypeimg;
    UIImageView *_flightListArrow;
    NSLayoutConstraint *_wConstForStudent;
    NSLayoutConstraint *_hConstForStudent;
    NSLayoutConstraint *_cnsAlignTrailForStudent;
    NSLayoutConstraint *_wConstForMobile;
    NSLayoutConstraint *_hConstForMobile;
    UIView *_actualAirlineView;
    CTFlightImageView *_actualAirlineLogo;
    UILabel *_actualAirlineNameLabel;
}

+ (double)setupCellSubView:(id)arg1 witModel:(id)arg2 pageType:(int)arg3 sortType:(int)arg4 isRemenberSort:(_Bool)arg5 cacheBean:(id)arg6;
+ (id)userInfoForTags:(id)arg1 viewModel:(id)arg2 adultsCount:(long long)arg3 childrenCount:(long long)arg4 babyCount:(long long)arg5;
+ (struct CGSize)tagSizeWithArea:(int)arg1 viewModel:(id)arg2 adultsCount:(long long)arg3 childrenCount:(long long)arg4 babyCount:(long long)arg5;
+ (void)setTagArea:(int)arg1 viewModel:(id)arg2 adultsCount:(long long)arg3 childrenCount:(long long)arg4 babyCount:(long long)arg5 container:(id)arg6 withCell:(id)arg7;
@property(nonatomic) __weak UILabel *actualAirlineNameLabel; // @synthesize actualAirlineNameLabel=_actualAirlineNameLabel;
@property(nonatomic) __weak CTFlightImageView *actualAirlineLogo; // @synthesize actualAirlineLogo=_actualAirlineLogo;
@property(nonatomic) __weak UIView *actualAirlineView; // @synthesize actualAirlineView=_actualAirlineView;
@property(nonatomic) _Bool isSelectedCell; // @synthesize isSelectedCell=_isSelectedCell;
@property(nonatomic) __weak NSLayoutConstraint *hConstForMobile; // @synthesize hConstForMobile=_hConstForMobile;
@property(nonatomic) __weak NSLayoutConstraint *wConstForMobile; // @synthesize wConstForMobile=_wConstForMobile;
@property(nonatomic) __weak NSLayoutConstraint *cnsAlignTrailForStudent; // @synthesize cnsAlignTrailForStudent=_cnsAlignTrailForStudent;
@property(nonatomic) __weak NSLayoutConstraint *hConstForStudent; // @synthesize hConstForStudent=_hConstForStudent;
@property(nonatomic) __weak NSLayoutConstraint *wConstForStudent; // @synthesize wConstForStudent=_wConstForStudent;
@property(retain, nonatomic) UIImageView *flightListArrow; // @synthesize flightListArrow=_flightListArrow;
@property(nonatomic) __weak UILabel *iTypeimg; // @synthesize iTypeimg=_iTypeimg;
@property(nonatomic) __weak UIView *viewTagStudent; // @synthesize viewTagStudent=_viewTagStudent;
@property(nonatomic) __weak NSLayoutConstraint *hConstForArrAirport; // @synthesize hConstForArrAirport=_hConstForArrAirport;
@property(nonatomic) __weak NSLayoutConstraint *wConstForArrAirport; // @synthesize wConstForArrAirport=_wConstForArrAirport;
@property(nonatomic) __weak NSLayoutConstraint *hConstForDepAirport; // @synthesize hConstForDepAirport=_hConstForDepAirport;
@property(nonatomic) __weak NSLayoutConstraint *wConstForDepAirport; // @synthesize wConstForDepAirport=_wConstForDepAirport;
@property(nonatomic) __weak NSLayoutConstraint *hConstForLabelRoundTrip; // @synthesize hConstForLabelRoundTrip=_hConstForLabelRoundTrip;
@property(nonatomic) __weak NSLayoutConstraint *wConstForLabelRoundTrip; // @synthesize wConstForLabelRoundTrip=_wConstForLabelRoundTrip;
@property(nonatomic) __weak NSLayoutConstraint *tConstForDepartAirport; // @synthesize tConstForDepartAirport=_tConstForDepartAirport;
@property(nonatomic) __weak NSLayoutConstraint *tConstForImageArrow; // @synthesize tConstForImageArrow=_tConstForImageArrow;
@property(nonatomic) __weak NSLayoutConstraint *tConstForLabelDepartTime; // @synthesize tConstForLabelDepartTime=_tConstForLabelDepartTime;
@property(nonatomic) __weak NSLayoutConstraint *bConstForLabelClass; // @synthesize bConstForLabelClass=_bConstForLabelClass;
@property(nonatomic) __weak NSLayoutConstraint *hConstForTicketNumber; // @synthesize hConstForTicketNumber=_hConstForTicketNumber;
@property(nonatomic) __weak NSLayoutConstraint *wConstForTicketNumber; // @synthesize wConstForTicketNumber=_wConstForTicketNumber;
@property(nonatomic) __weak NSLayoutConstraint *hConstForLabelDepartTime; // @synthesize hConstForLabelDepartTime=_hConstForLabelDepartTime;
@property(nonatomic) __weak NSLayoutConstraint *wConstForLabelDepartTime; // @synthesize wConstForLabelDepartTime=_wConstForLabelDepartTime;
@property(nonatomic) __weak UILabel *crossDay; // @synthesize crossDay=_crossDay;
@property(nonatomic) __weak UILabel *operationNoticeLabel; // @synthesize operationNoticeLabel=_operationNoticeLabel;
@property(nonatomic) __weak UIImageView *cityLineImageView; // @synthesize cityLineImageView=_cityLineImageView;
@property(nonatomic) __weak UILabel *stopCityLB; // @synthesize stopCityLB=_stopCityLB;
@property(nonatomic) __weak UILabel *airlineTime; // @synthesize airlineTime=_airlineTime;
@property(nonatomic) __weak UILabel *firstClassLB; // @synthesize firstClassLB=_firstClassLB;
@property(nonatomic) __weak CTFlightImageView *airCompanyIcon; // @synthesize airCompanyIcon=_airCompanyIcon;
@property(nonatomic) __weak UILabel *secondArriveAirportLB; // @synthesize secondArriveAirportLB=_secondArriveAirportLB;
@property(nonatomic) __weak UILabel *firstDepartAirportLB; // @synthesize firstDepartAirportLB=_firstDepartAirportLB;
@property(nonatomic) __weak UILabel *ticketsAmountLB; // @synthesize ticketsAmountLB=_ticketsAmountLB;
@property(nonatomic) __weak UILabel *taxFont; // @synthesize taxFont=_taxFont;
@property(nonatomic) __weak UILabel *taxCurrency; // @synthesize taxCurrency=_taxCurrency;
@property(nonatomic) __weak UILabel *tax; // @synthesize tax=_tax;
@property(nonatomic) __weak UILabel *crossFont; // @synthesize crossFont=_crossFont;
@property(nonatomic) __weak UILabel *labelRoundTrip; // @synthesize labelRoundTrip=_labelRoundTrip;
@property(nonatomic) __weak UILabel *priceLB; // @synthesize priceLB=_priceLB;
@property(nonatomic) __weak UILabel *currencyLB; // @synthesize currencyLB=_currencyLB;
@property(nonatomic) __weak UILabel *arriveTimeLB; // @synthesize arriveTimeLB=_arriveTimeLB;
@property(nonatomic) __weak UILabel *departArriveTimeLB; // @synthesize departArriveTimeLB=_departArriveTimeLB;
@property(nonatomic) __weak UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) CTIntFlightListBaseCacheBean *listCacheBean; // @synthesize listCacheBean=_listCacheBean;
@property(retain, nonatomic) CTIntlFlightSegmentListViewModel *segmentModel; // @synthesize segmentModel=_segmentModel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)getfirstClassLBTextwith:(id)arg1 isShowClassType:(long long)arg2;
- (_Bool)isTagHasFinished:(id)arg1;
- (void)doTagCodeLogAction:(id)arg1 areaTag:(id)arg2;
- (void)setupBackgroundColor:(int)arg1;
- (void)setHighOrLow:(_Bool)arg1;
- (_Bool)matchFlightNo;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
