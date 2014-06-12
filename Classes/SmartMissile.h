//
//  SmartMissile.h
//  Mario
//
//  Created by Dian Peng on 3/8/14.
//  Copyright (c) 2014 Dian Peng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCNode.h"


@class GameMapFileObject;
@class GameScene;

@interface SmartMissile : CCNode
+(id) createObject:(GameMapFileObject*)par withScene:(GameScene*)scene;
@end
