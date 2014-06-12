//
//  Background.h
//  Mario
//
//  Created by zhaodongni on 3/8/14.
//  Copyright 2014 Dian Peng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCNode.h"

@class GameScene;
@class GameMapFileObject;

@interface Background : CCNode
+(id) createObject:(GameMapFileObject*)par withScene:(GameScene*)scene;
-(void) stop;
@end
