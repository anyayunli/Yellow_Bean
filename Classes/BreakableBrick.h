//
//  BreakableBrick.h
//  prototype
//
//  Created by Dian Peng on 3/2/14.
//  Copyright (c) 2014 Dian Peng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BrickBase.h"

@interface BreakableBrick : BrickBase
+(id) createObject:(GameMapFileObject*)par withScene:(GameScene*)scene;
@end
