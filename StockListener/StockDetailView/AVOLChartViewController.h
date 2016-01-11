//
//  BuySellChartViewController.h
//  StockListener
//
//  Created by Guozhen Li on 12/14/15.
//  Copyright © 2015 Guangzhen Li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class StockInfo;

@interface AVOLChartViewController : NSObject

@property (nonatomic, strong) StockInfo* stockInfo;
@property (nonatomic, assign) NSInteger max;
@property (nonatomic, assign) NSInteger min;

-(void) loadViewVertical:(CGRect) rect;
-(id) initWithParentView:(UIView*)view;
- (void) reload;
-(void)loadView:(CGRect) rect;
@end