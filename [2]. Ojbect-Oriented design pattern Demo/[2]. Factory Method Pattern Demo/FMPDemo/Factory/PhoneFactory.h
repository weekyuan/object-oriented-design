//
//  PhoneFactory.h
//  FMPDemo
//
//  Created by Sun Shijie on 2018/10/3.
//  Copyright © 2018年 Sunshijie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Phone.h"

@interface PhoneFactory : NSObject

+ (Phone *)createPhone;

@end
