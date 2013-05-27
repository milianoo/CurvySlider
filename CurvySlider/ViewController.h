//
//  ViewController.h
//  CurvySlider
//
//  Created by Milad Rezazadeh on 5/24/13.
//  Copyright (c) 2013 Milad Rezazadeh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface ViewController : UIViewController
{
    UIBezierPath *trackPath;
    CAShapeLayer *slidertrack;
    
    CALayer *SliderButton;
    IBOutlet UIImageView* btn_slider;
    IBOutlet UILabel* lbl_value;
    int value;
    
    NSMutableDictionary* curvePoints;
    bool isShapeSelected;
}

@property(nonatomic,retain) IBOutlet UIImageView* btn_slider;
@property(nonatomic,retain) IBOutlet UIView* mainview;
@property(nonatomic,retain) IBOutlet UILabel* lbl_value;
@property(nonatomic) int value;

@end

