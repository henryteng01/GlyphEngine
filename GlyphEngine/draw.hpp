//
//  draw.hpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/18/23.
//

#ifndef draw_hpp
#define draw_hpp

#include <stdio.h>
#include <SDL2/SDL.h>

void prepareScene(SDL_Renderer* renderer);
void presentScene(SDL_Renderer * renderer);
SDL_Texture *loadTexture(SDL_Renderer* renderer, char* filename);
void blit(SDL_Renderer* renderer, SDL_Texture *texture, int x, int y);

#endif /* draw_hpp */
