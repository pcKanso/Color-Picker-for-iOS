//
// Created by hayashi311 on 2013/09/14.
// Copyright (c) 2013 Hayashi Ryota. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@protocol HRColorMapView

@required
@property (nonatomic, strong) UIColor *color;
@property (nonatomic) CGFloat brightness;

@optional
@property (nonatomic) CGFloat saturationUpperLimit;

@end

@interface HRColorMapView : UIControl <HRColorMapView>

+ (HRColorMapView *)colorMapWithFrame:(CGRect)frame;

+ (HRColorMapView *)colorMapWithFrame:(CGRect)frame saturationUpperLimit:(CGFloat)saturationUpperLimit;

@property (nonatomic) CGFloat tileSize;

@end