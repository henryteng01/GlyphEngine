//
//  ghost.hpp
//  GlyphEngine
//
//  Created by Henry Teng on 9/1/23.
//

#ifndef ghost_hpp
#define ghost_hpp

#include <stdio.h>
#include <SDL2/SDL.h>

struct Ghost {
    SDL_Texture *texture;
    
    Ghost();
    Ghost(SDL_Texture *texture_in);
    ~Ghost();
};

#endif /* ghost_hpp */
