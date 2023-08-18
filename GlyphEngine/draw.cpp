//
//  draw.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/18/23.
//

#include "draw.hpp"
#include <SDL2/SDL.h>

void prepareScene(SDL_Renderer * renderer) {
    SDL_SetRenderDrawColor(renderer, 0, 123, 167, 255);
    SDL_RenderClear(renderer);
}

void presentScene(SDL_Renderer * renderer) {
    SDL_RenderPresent(renderer);
}
