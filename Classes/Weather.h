//
//  Weather.h
//  Yellow_Bean
//
//  Created by Dian Peng on 4/10/14.
//  Copyright (c) 2014 Dian Peng. All rights reserved.
//

#import "CCNode.h"


@class GameMapFileObject;
@class GameScene;

@interface Weather : CCNode
+(id)createObject:(GameMapFileObject*)par withScene:(GameScene*)scene;
@end
