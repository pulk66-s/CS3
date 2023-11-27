#pragma once

#include <memory>
#include "Logic/Map/Map.hpp"

namespace cs::game::map
{
    class Actions {
    public:
        Actions(std::shared_ptr<Map> map) : map(map) {}

        void addRoad(int x, int y);
        void addBuilding(int x, int y);
        void listBuildings();
        void listInfos();
    private:
        std::shared_ptr<Map> map;
    };
} // namespace cs::game::map
