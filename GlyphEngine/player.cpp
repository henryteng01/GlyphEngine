//
//  player.cpp
//  GlyphEngine
//
//  Created by Henry Teng on 8/22/23.
//

#include "player.hpp"
#include <SDL2/SDL.h>

Player::Player() {
    x = 0;
    y = 0;
}

Player::Player(int x_in, int y_in, SDL_Texture *texture_in) {
    x = x_in;
    y = y_in;
    texture = texture_in;
}

Player::~Player() {
    if (texture) {
        SDL_DestroyTexture(texture);
    }
    SDL_Quit();
}
