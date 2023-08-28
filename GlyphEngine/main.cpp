//
//  main.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/17/23.
//

#include <iostream>
#include <SDL2/SDL.h>
#include "app.h"
#include "player.hpp"
#include "draw.hpp"
#include "input.hpp"

int main(int argc, const char * argv[]) {
    App app;
    app.initSDL();
    
    char* filename = "/Users/henry/Projects/GlyphEngine/GlyphEngine/pacman.png";
    SDL_Texture *texture = loadTexture(app.renderer, filename);
    Player player(100, 100, texture);
    
    while (1) {
        prepareScene(app.renderer);
        
        doInput(&app);
        
        if (app.up) {
            player.y -= 1;
        }
        
        else if (app.down) {
            player.y += 1;
        }
        
        else if (app.left) {
            player.x -= 1;
        }
        
        else if (app.right) {
            player.x += 1;
        }
        
        blit(app.renderer, player.texture, player.x, player.y);
        
        presentScene(app.renderer);
        
        SDL_Delay(16);
    }
    return 0;
}
