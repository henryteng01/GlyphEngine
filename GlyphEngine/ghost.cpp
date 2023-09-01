//
//  ghost.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 9/1/23.
//

#include "ghost.hpp"
#include <SDL2/SDL.h>

# eventually can combine player and ghost into a single sprite class maybe?

Ghost::Ghost() {
    
}

Ghost::Ghost(SDL_Texture *texture_in) {
    texture = texture_in;
}

Ghost::~Ghost() {
    if (texture) {
        SDL_DestroyTexture(texture);
    }
    SDL_Quit();
}
