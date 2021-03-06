//
//  AQTModel.h
//  AquaTerm
//
//  Created by per on Fri Nov 02 2001.
//  Copyright (c) 2001-2012 The AquaTerm Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AQTGraphic.h"

@interface AQTModel : AQTGraphic /*" NSObject "*/ 
{
   NSMutableArray *modelObjects; /*" An array of AQTGraphic objects (leaf or collection) "*/
   NSString       *title; /*" Associate a title with the model. Default is 'Figure n'. "*/
   NSSize         canvasSize;
   NSRect         dirtyRect;
   BOOL           isDirty;
}
-(id)initWithCanvasSize:(NSSize)canvasSize;
-(void)setCanvasSize:(NSSize)canvasSize;
-(NSSize)canvasSize;
-(NSRect)dirtyRect;
-(BOOL)isDirty;
-(int32_t)count;
-(void)addObject:(AQTGraphic *)graphic;
-(void)addObjectsFromArray:(NSArray *)graphics;
-(NSArray *)modelObjects;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(uint32_t)i;
-(void)setTitle:(NSString *)newTitle;
-(NSString *)title;
@end
