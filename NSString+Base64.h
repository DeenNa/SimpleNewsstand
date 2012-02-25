//
//  NSString+Base64.h
//  Newsstand
//
//  Created by Deen Na on 2/18/12.
//  Copyright (c) 2012 Home. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Base64)

+ (NSString *) base64StringFromData:(NSData *)data length:(int)length;

@end
