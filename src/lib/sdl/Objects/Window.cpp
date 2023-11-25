#include "lib/sdl/Objects/Window.hpp"

namespace cs::lib::sdl
{
    Window::Window(SDL_Window *win, SDL_Renderer *renderer)
    : _win(win), _renderer(renderer) {
        _clearColor = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    }

    Window::Window(SDL_Window *win)
    : Window::Window(win, SDL_CreateRenderer(
            win, -1,
            SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
        )
    ) {}

    Window::Window()
    : Window::Window(
        SDL_CreateWindow(
            "Test",
            SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
            1200, 800, (SDL_WindowFlags)(SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI)
        )
    ) {}

    void Window::io(ImGuiIO io) {
        _io = io;
    };

    void Window::defaultIo(void) {
        _io = ImGui::GetIO();
        _io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
        _io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
    }

    void Window::display() {
        SDL_RenderSetScale(
            _renderer.get(),
            _io.DisplayFramebufferScale.x,
            _io.DisplayFramebufferScale.y
        );
        SDL_SetRenderDrawColor(_renderer.get(),
            (Uint8)(_clearColor.x * 255),
            (Uint8)(_clearColor.y * 255),
            (Uint8)(_clearColor.z * 255),
            (Uint8)(_clearColor.w * 255)
        );
        SDL_RenderClear(_renderer.get());
        ImGui_ImplSDLRenderer2_RenderDrawData(ImGui::GetDrawData());
        SDL_RenderPresent(_renderer.get());
    }

    SDL_Window *Window::get() {
        return _win;
    }

    Renderer *Window::getRenderer() {
        return &_renderer;
    }

} // namespace cs::lib::sdl
