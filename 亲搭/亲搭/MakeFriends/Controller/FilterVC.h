//
//  FilterVC.h
//  亲搭
//
//  Created by KFZXSHANGJQ on 2018/11/2.
//  Copyright © 2018年 hxlove. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^CommitValueBlock) (NSMutableDictionary *dict);

@interface FilterVC : UIViewController
@property(nonatomic, copy) CommitValueBlock commitValueBlock;

@end
