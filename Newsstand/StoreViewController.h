//
//  StoreViewController.h
//  Newsstand
//
//  Created by Deen Na on 2/18/12.
//  Copyright (c) 2012 Home. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Publisher.h"
#import <NewsstandKit/NewsstandKit.h>
#import <QuickLook/QuickLook.h>

@interface StoreViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,NSURLConnectionDownloadDelegate,
QLPreviewControllerDelegate,QLPreviewControllerDataSource,SKRequestDelegate,SKProductsRequestDelegate,SKPaymentTransactionObserver,NSURLConnectionDelegate> {
    Publisher *publisher;
    UIBarButtonItem *waitButton;
    UIBarButtonItem *refreshButton;
}

@property (retain, nonatomic) IBOutlet UITableView *table;
@property (retain, nonatomic) IBOutlet UITableViewCell *issueCell;

// In App Purchase
@property (nonatomic,assign) BOOL purchasing;

-(void)trashContent;
- (IBAction)freeSubscription:(id)sender;
- (IBAction)paid1Month:(id)sender;
- (IBAction)paid1Year:(id)sender;
- (IBAction)checkReceipts:(id)sender;

@end
