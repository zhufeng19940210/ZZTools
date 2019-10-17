//
//  ZJSegmentStyle.h
//  ZZToolsDemo
//
//  Created by 刘猛 on 19/5/6.
//  Copyright © 2016年 刘猛. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, TitleImagePosition) {
    TitleImagePositionLeft,
    TitleImagePositionRight,
    TitleImagePositionTop,
    TitleImagePositionCenter
};

typedef NS_OPTIONS(NSInteger, SegmentViewComponent) {
    SegmentViewComponentShowCover = 1 << 0,
    SegmentViewComponentShowLine = 1 << 1,
    SegmentViewComponentShowImage = 1 << 2,
    SegmentViewComponentShowExtraButton = 1 << 3,
    SegmentViewComponentScaleTitle = 1 << 4,
    SegmentViewComponentScrollTitle = 1 << 5,
    SegmentViewComponentBounces = 1 << 6,
    SegmentViewComponentGraduallyChangeTitleColor = 1 << 7,
    SegmentViewComponentAdjustCoverOrLineWidth = 1 << 8,
    SegmentViewComponentAutoAdjustTitlesWidth = 1 << 9,
    SegmentViewComponentShowCoverGrade = 1 << 10,
};

@interface ZJSegmentStyle : NSObject

///是否显示遮盖 默认为NO
@property (nonatomic, assign, getter=isShowCover) BOOL showCover;
///
@property (nonatomic, strong) NSArray           <NSString *>*gradientColors;
///是否显示遮盖渐变 默认为NO
@property (nonatomic, assign, getter=isShowCoverGrade) BOOL showCoverGrade;
///是否显示滚动条 默认为NO*/
@property (nonatomic, assign, getter=isShowLine) BOOL showLine;
///是否显示图片 默认为NO*/
@property (nonatomic, assign, getter=isShowImage) BOOL showImage;
///是否显示附加的按钮 默认为NO*/
@property (nonatomic, assign, getter=isShowExtraButton) BOOL showExtraButton;
///是否缩放标题 不能滚动的时候就不要把缩放和遮盖或者滚动条同时使用, 否则显示效果不好 默认为NO*/
@property (nonatomic, assign, getter=isScaleTitle) BOOL scaleTitle;
///是否滚动标题 默认为YES 设置为NO的时候所有的标题将不会滚动, 并且宽度会平分 和系统的segment效果相似
@property (nonatomic, assign, getter=isScrollTitle) BOOL scrollTitle;
///segmentView是否有弹性 默认为YES*/
@property (nonatomic, assign, getter=isSegmentViewBounces) BOOL segmentViewBounces;
///contentView是否有弹性 默认为YES*/
@property (nonatomic, assign, getter=isContentViewBounces) BOOL contentViewBounces;
///是否颜色渐变 默认为NO*/
@property (nonatomic, assign, getter=isGradualChangeTitleColor) BOOL gradualChangeTitleColor;
///内容view是否能滑动 默认为YES*/
@property (nonatomic, assign, getter=isScrollContentView) BOOL scrollContentView;
///点击标题切换的时候,内容view是否会有动画 默认为YES*/
@property (nonatomic, assign, getter=isAnimatedContentViewWhenTitleClicked) BOOL animatedContentViewWhenTitleClicked;
///当设置scrollTitle=NO的时候标题会平分宽度, 如果你希望在滚动的过程中cover或者scrollLine的宽度随着变化设置这个属性为YES 默认为NO*/
@property (nonatomic, assign, getter=isAdjustCoverOrLineWidth) BOOL adjustCoverOrLineWidth;
///是否自动调整标题的宽度, 当设置为YES的时候 如果所有的标题的宽度之和小于segmentView的宽度的时候, 会自动调整title的位置, 达到类似"平分"的效果 默认为NO*/
@property (nonatomic, assign, getter=isAutoAdjustTitlesWidth) BOOL autoAdjustTitlesWidth;
///是否在开始滚动的时候就调整标题栏 默认为NO
@property (nonatomic, assign, getter=isAdjustTitleWhenBeginDrag) BOOL adjustTitleWhenBeginDrag;
///设置附加按钮的背景图片 默认为nil*/
@property (nonatomic, strong) NSString *extraBtnBackgroundImageName;
///滚动条的高度 默认为2
@property (nonatomic, assign) CGFloat scrollLineHeight;
///滚动条到底部的距离*/
@property (nonatomic,assign)  CGFloat scrollLineBottomMargin;
///滚动条的颜色
@property (nonatomic, strong) UIColor *scrollLineColor;
///遮盖的颜色
@property (nonatomic, strong) UIColor *coverBackgroundColor;
///遮盖的圆角 默认为14*/
@property (nonatomic, assign) CGFloat coverCornerRadius;
///遮盖的高度 默认为28*/
@property (nonatomic, assign) CGFloat coverHeight;
///标题之间的间隙 默认为15.0
@property (nonatomic, assign) CGFloat titleMargin;
///标题的字体 默认为14
@property (nonatomic, strong) UIFont *titleFont;
///标题缩放倍数, 默认1.3
@property (nonatomic, assign) CGFloat titleBigScale;
///标题一般状态的颜色
@property (nonatomic, strong) UIColor *normalTitleColor;
///标题选中状态的颜色
@property (nonatomic, strong) UIColor *selectedTitleColor;
///segmentVIew的高度, 这个属性只在使用ZJScrollPageVIew的时候设置生效
@property (nonatomic, assign) CGFloat segmentHeight;
///标题中图片的位置
@property (nonatomic, assign) TitleImagePosition imagePosition;

/**未使用*/
//@property (nonatomic, assign) SegmentViewComponent segmentViewComponent;

@end
