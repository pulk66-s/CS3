#pragma once

#include "lib/sdl/namespace.hpp"
#include "lib/sdl/Objects/Renderer.hpp"
#include "SDL.h"
#include "imgui.h"
#include "imgui_impl_sdl2.h"
#include "imgui_impl_sdlrenderer2.h"
#include <memory>

namespace cs::lib::sdl
{
    class Window {
    public:
        Window(SDL_Window *win, SDL_Renderer *renderer);
        Window(SDL_Window *win);
        Window();

        void io(ImGuiIO io);
        void defaultIo(void);
        SDL_Window *get();
        Renderer *getRenderer();

        void display();

    private:
        ImVec4 _clearColor;
        ImGuiIO _io;
        SDL_Window *_win;
        Renderer _renderer;
    };
} // namespace cs::lib::sdl
