//
//  MineGroupEntity.h
//  bilibili fake
//
//  Created by 翟泉 on 2016/7/29.
//  Copyright © 2016年 云之彼端. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MineItemEntity.h"

@interface MineGroupEntity : NSObject

@property (strong, nonatomic) NSString *title;

@property (strong, nonatomic) NSArray<MineItemEntity *> *items;

@end
