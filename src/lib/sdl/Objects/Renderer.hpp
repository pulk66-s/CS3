#pragma once

#include "lib/sdl/namespace.hpp"
#include "SDL.h"
#include <memory>

namespace cs::lib::sdl
{
    class Renderer {
    public:
        Renderer(SDL_Renderer *renderer): _renderer(renderer) {};

        SDL_Renderer *get() { return _renderer; };
    private:
        SDL_Renderer *_renderer;
    };
} // namespace cs::lib::sdl
