#pragma once

#include "lib/sdl/namespace.hpp"
#include "SDL.h"
#include "imgui.h"
#include "imgui_impl_sdl2.h"
#include "imgui_impl_sdlrenderer2.h"

namespace cs::lib::sdl
{
    class Event {
    private:
        SDL_Event event;
        bool _isQuit = false;

    public:
        void poll() {
            while (SDL_PollEvent(&this->event)) {
                ImGui_ImplSDL2_ProcessEvent(&event);
                if (this->event.type == SDL_QUIT)
                    this->_isQuit = true;
            }
        }

        bool isQuit() { return this->_isQuit; }
    };
} // namespace cs::sdl::lib
