//
//  draw.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/18/23.
//

#include "draw.hpp"
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

void prepareScene(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, 0, 123, 167, 255);
    SDL_RenderClear(renderer);
}

void presentScene(SDL_Renderer *renderer) {
    SDL_RenderPresent(renderer);
}

SDL_Texture *loadTexture(SDL_Renderer *renderer, char* filename) {
    SDL_Texture *texture;
    
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", filename);
    
    texture = IMG_LoadTexture(renderer, filename);

    if (!texture) {
        printf("Error opening file: SDL Error: %s", SDL_GetError());
        exit(1);
    }
    
    return texture;
}

void blit(SDL_Renderer *renderer, SDL_Texture *texture, int x, int y) {
    SDL_Rect dest;
    
    dest.x = x;
    dest.y = y;
    SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);
    
    dest.w = 25;
    dest.h = 25;
    
    SDL_RenderCopy(renderer, texture, NULL, &dest);
}
