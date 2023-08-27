//
//  app.h
//  GlyphEngine
//
//  Created by Henry Teng on 8/18/23.
//

#ifndef app_h
#define app_h

#include <SDL2/SDL.h>

struct App {
    SDL_Window *window;
    SDL_Renderer *renderer;
    int up;
    int down;
    int left;
    int right;
    
    App();
    void initSDL();
    ~App();
};

#endif /* app_h */
