#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Map.hpp"

namespace cs::game
{
    class Game {
    public:
        Game() {
            map = std::make_shared<map::Map>();
            actions = std::make_shared<map::Actions>(map);
        }

        std::shared_ptr<map::Map> getMap() { return map; }
        std::shared_ptr<map::Actions> getActions() { return actions; }
    private:
        std::shared_ptr<map::Map> map;
        std::shared_ptr<map::Actions> actions;
    };
} // namespace cs::game
