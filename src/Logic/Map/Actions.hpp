#pragma once

#include <memory>
#include "Logic/Map/Map.hpp"
#include "Logic/Building.hpp"

namespace cs::game::map
{
    class Actions {
    public:
        Actions(std::shared_ptr<Map> map) : map(map) {}

        void addRoad(int x, int y);
        void addBuilding(int x, int y, int w = 1, int h = 1);
        template <typename T>
        void addZone(int x, int y, int w = 1, int h = 1) {
            std::shared_ptr<buildings::zones::IZone> zone = std::make_shared<T>(x, y, w, h);

            if (!zone->build(this->map->infos().zones(), this->map->infos().colliders())) {
                std::cout << "Can't build zone here" << std::endl;
                return;
            }
            this->map->infos().zones().add(zone);
        }

        void listBuildings();
        void listInfos();
        void listZones();
    private:
        std::shared_ptr<Map> map;
    };
} // namespace cs::game::map
