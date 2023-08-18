//
//  input.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/18/23.
//

#include "input.hpp"
#include <SDL2/SDL.h>

void doInput() {
    SDL_Event event;
    
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                exit(0);
                break;
            default:
                break;
        }
    }
}
