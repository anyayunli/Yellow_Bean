//
//  ShopScene.h
//  GameMenus
//
//  Created by Lifei Wang on 3/21/14.
//  Copyright (c) 2014 Lifei Wang. All rights reserved.
//

#import "CCScene.h"

@class CCLabelTTF;

@interface ShopScene : CCScene
{
    NSInteger coinsNum;
}

@property (nonatomic ,retain) CCLabelTTF *coinLabel;

+(ShopScene *)scene;

@end
