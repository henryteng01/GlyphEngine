//
//  main.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/17/23.
//

#include <iostream>
#include <SDL2/SDL.h>
#include "app.h"
#include "draw.hpp"
#include "input.hpp"

int main(int argc, const char * argv[]) {
    App app;
    
    app.initSDL();
    
    while (1) {
        prepareScene(app.renderer);
        
        doInput();
        
        presentScene(app.renderer);
        
        SDL_Delay(16);
    }
    std::cout << "BatChest" << std::endl;
    return 0;
}
