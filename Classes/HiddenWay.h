//
//  HiddenWay.h
//  Mario
//
//  Created by Dian Peng on 4/4/14.
//  Copyright (c) 2014 Dian Peng. All rights reserved.
//

#import "WayPointBaseItem.h"

@interface HiddenWay : WayPointBaseItem
+(id) createObject:(GameMapFileObject*)par withScene:(GameScene*)scene;
@end
