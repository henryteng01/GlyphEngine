//
//  app.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/19/23.
//

#include <iostream>
#include "app.h"
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

App::App() : window(nullptr), renderer(nullptr) {
    
}

void App::initSDL() {
    int rendererFlags, windowFlags;
    
    rendererFlags = SDL_RENDERER_ACCELERATED;
    windowFlags = 0;
    
    if (SDL_Init(SDL_INIT_VIDEO)) {
        std::cout << "Could not initialize video! SDL Error: " << SDL_GetError() << std::endl;
        exit(1);
    }
    
    window = SDL_CreateWindow("Lol Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 512, 512, windowFlags);
    
    if (!window) {
        std::cout << "Could not create window of size 512x512. SDL Error: " << SDL_GetError() << std::endl;
        exit(1);
    }
    
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    
    renderer = SDL_CreateRenderer(window, -1, rendererFlags);
    
    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);
    
    if (!renderer) {
        std::cout << "Could not create renderer. SDL Error: " << SDL_GetError() << std::endl;
        exit(1);
    }
}

App::~App() {
    if (renderer) {
        SDL_DestroyRenderer(renderer);
    }
    if (window) {
        SDL_DestroyWindow(window);
    }
    SDL_Quit();
}
