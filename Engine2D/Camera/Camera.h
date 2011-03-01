//
//
//  Camera.h
//  
//
//  Created by Eskema.
//  Copyright Eskema 2009. All rights reserved.
//

#import <Foundation/Foundation.h>
@class StateManager;


@interface Camera : NSObject {
	float CameraX;
	float CameraY;
	StateManager *states;
}


@property (nonatomic, readwrite) float CameraX, CameraY;




//move camera
-(void) MoveCamera2DX:(float)objx  Y:(float)y  SmoothMove:(int)smoothmove  TotalMapWidth:(int)totalmap  TotalMapHeight:(int)totalmapHeight TileSize:(int)TileSize;

@end


