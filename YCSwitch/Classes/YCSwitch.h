//
//  YCSwitch.h
//  CCTest
//
//  Created by Durand on 26/8/16.
//  Copyright © 2016年 com.Durand. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YCSwitch : UIControl

#pragma State
/** A Boolean value that represents switch's current state(ON/OFF). YES to ON, NO to OFF the switch */
@property (nonatomic, assign) BOOL isOn;
/** A Boolean value that represents switch's interaction mode. YES to set enabled, No to set disabled*/
@property (nonatomic, assign, getter=isEnabled) BOOL enabled;
/** A Boolean value whether the bounce animation effect is enabled when state change movement */
@property (nonatomic, assign, getter=isBounceEnabled) BOOL bounceEnabled;

#pragma Image
/** An UIImage property to represent the UIImage of the switch thumb when position is ON */
@property (nonatomic, strong) UIImage *thumbOnImage;
/** An UIImage property to represent the UIImage of the switch thumb when position is OFF */
@property (nonatomic, strong) UIImage *thumbOffImage;

#pragma Color
/** An UIColor property to represent the colour of the track when position is ON */
@property (nonatomic, strong) UIColor *trackOnTintColor;
/** An UIColor property to represent the colour of the track when position is OFF */
@property (nonatomic, strong) UIColor *trackOffTintColor;

#pragma Size
@property (nonatomic, assign) CGSize thumbSize;
@property (nonatomic, assign) CGFloat trackThickHeight;
#pragma UI components
/** An UIButton object that represents current state(ON/OFF) */
@property (nonatomic, strong) UIButton *switchThumb;
/** An UIView object that represents the track for the thumb */
@property (nonatomic, strong) UIView *track;

#pragma HandlerAction
// This method sets handler block that is getting called after the switcher is done animating the transition

- (void)setPressedHandler:(void (^)(BOOL isOn))handler;

// This method sets handler block that is getting called right before the switcher starts animating the transition

- (void)setWillBePressedHandler:(void (^)(BOOL isOn))handler;
/**
 *  Set switch state with or without moving animation of switch thumb
 *
 *  @param on The switch state you want to set
 *  @param animated Yes to set with animation, NO to do without.
 */
- (void)setOn:(BOOL)on animated:(BOOL)animated;

- (instancetype)initWithFrame:(CGRect)frame thumbSize:(CGSize)thumbSize trackThickHeight:(CGFloat)trackThickHeight;
@end
