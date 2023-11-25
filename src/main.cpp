#include "lib/imgui.hpp"
#include "lib/sdl.hpp"

int main(void)
{
    cs::lib::sdl::Sdl2 sdl;

    if (sdl.init() == false)
        return 1;

    cs::lib::sdl::Window win;
    cs::lib::imgui::Imgui imgui(&win);
    bool showWindow = true;

    win.defaultIo();

    while (showWindow) {
        cs::lib::sdl::Event event;

        event.poll();
        if (event.isQuit())
            showWindow = false;
        imgui.renderStart();
        imgui.renderEnd();
        win.display();
    }
    return 0;
}
