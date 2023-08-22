//
//  player.hpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/22/23.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include <SDL2/SDL.h>

struct Player {
    int x;
    int y;
    SDL_Texture *texture;
    
    Player();
    Player(int x_in, int y_in, SDL_Texture *texture_in);
    ~Player();
};

#endif /* player_hpp */
