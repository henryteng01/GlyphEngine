//
//  input.hpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/18/23.
//

#ifndef input_hpp
#define input_hpp

#include <stdio.h>
#include "app.h"

void doKeyDown(SDL_KeyboardEvent *event, App *app);
void doKeyUp(SDL_KeyboardEvent *event, App *app);
void doInput(App *app);

#endif /* input_hpp */
