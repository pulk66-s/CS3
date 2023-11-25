#pragma once

#include "namespace.hpp"
#include <SDL.h>

namespace cs::lib::sdl
{
    class Sdl2 {
    public:
        bool init() {
            if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0) {
                printf("Error: %s\n", SDL_GetError());
                return false;
            }
            return true;
        }
    };
} // namespace cs::lib::sdl
