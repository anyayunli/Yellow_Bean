//
//  AirObstacle.h
//  Mario
//
//  Created by Dian Peng on 4/1/14.
//  Copyright (c) 2014 Dian Peng. All rights reserved.
//

#import "BlockBase.h"

@interface AirObstacle : BlockBase
+(id) createObject:(GameMapFileObject*)par withScene:(GameScene*)scene;
@end
