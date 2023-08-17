//
//  main.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/17/23.
//

#include <iostream>
#include <SDL2/SDL.h>

int main(int argc, const char * argv[]) {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
    }
    return EXIT_SUCCESS;
}
