#pragma once

#include "namespace.hpp"
#include "imgui.h"
#include "imgui_impl_sdl2.h"
#include "imgui_impl_sdlrenderer2.h"
#include "lib/sdl.hpp"
#include <memory>

namespace cs::lib::imgui
{
    class Imgui {
    public:
        Imgui(sdl::Window *win) {
            IMGUI_CHECKVERSION();
            ImGui::CreateContext();
            ImGui::StyleColorsDark();
            ImGui_ImplSDL2_InitForSDLRenderer(win->get(), win->getRenderer()->get());
            ImGui_ImplSDLRenderer2_Init(win->getRenderer()->get());
        }

        void renderStart() {
            ImGui_ImplSDLRenderer2_NewFrame();
            ImGui_ImplSDL2_NewFrame();
            ImGui::NewFrame();
        }

        void renderEnd() {
            ImGui::Render();
        }
    };
} // namespace cs::lib::imgui
