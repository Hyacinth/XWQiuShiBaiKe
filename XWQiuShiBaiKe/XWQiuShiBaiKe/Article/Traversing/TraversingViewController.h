//
//  TraversingViewController.h
//  XWQSBK
//
//  Created by Ren XinWei on 13-5-3.
//  Copyright (c) 2013年 renxinwei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Toolkit.h"

/**
 *穿越
 */
@interface TraversingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, EGORefreshTableHeaderDelegate, LoadMoreFooterViewDelegate, ASIHTTPRequestDelegate, QiuShiCellDelegate>
{
    ASIHTTPRequest *_traversingRequest;
    EGORefreshTableHeaderView *_refreshHeaderView;
    LoadMoreFooterView *_loadMoreFooterView;
    RequestType _requestType;
    QiuShiType _qiushiType;
    
    NSMutableArray *_traversingArray;
    NSInteger _currentTraversingPage;
    BOOL _reloading;
}

@property (nonatomic) BOOL isLoaded;
@property (retain, nonatomic) IBOutlet UIButton *sideButton;
@property (retain, nonatomic) IBOutlet UIButton *timeAgainButton;
@property (retain, nonatomic) IBOutlet UITableView *traversingTableView;

- (IBAction)sideButtonClicked:(id)sender;
- (IBAction)timeAgainButtonClicked:(id)sender;

@end
