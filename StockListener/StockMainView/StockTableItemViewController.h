//
//  StockTableItemViewController.h
//  StockListener
//
//  Created by Guozhen Li on 12/10/15.
//  Copyright © 2015 Guangzhen Li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class StockInfo;

@interface StockTableItemViewController : NSObject


-(UITableViewCell*) getTableViewCell:(UITableView*)tableView andInfo:(StockInfo*)info;
@end