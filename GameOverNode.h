//
//  GameOverNode.h
//  Mario
//
//  Created by Lifei Wang on 3/10/14.
//  Copyright (c) 2014 Dian Peng. All rights reserved.
//

#import "CCNode.h"

@protocol GameOverNodeDelegate <NSObject>
-(void)restartGame;
@end

@interface GameOverNode : CCNode
@property (weak) id<GameOverNodeDelegate> delegate;

-(id)initWithScore:(NSInteger)score Gold:(NSInteger)gold;

@end
