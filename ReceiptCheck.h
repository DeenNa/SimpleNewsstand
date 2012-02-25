//
//  ReceiptCheck.h
//  Newsstand
//
//  Created by Deen Na on 2/18/12.
//  Copyright (c) 2012 Home. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ReceiptCheck : NSObject<NSURLConnectionDelegate> {
    NSMutableData *receivedData;
}

+(ReceiptCheck *)validateReceiptWithData:(NSData *)receiptData completionHandler:(void(^)(BOOL,NSString *))handler;

@property (nonatomic,retain) void(^completionBlock)(BOOL,NSString *);
@property (nonatomic,retain) NSData *receiptData;

-(void)checkReceipt;

@end
