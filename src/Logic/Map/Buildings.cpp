#include "Logic/Map/Buildings.hpp"
#include <algorithm>

namespace cs::game::map
{
    void Buildings::add(std::shared_ptr<buildings::IBuilding> building)
    {
        buildings.push_back(building);
    }

    void Buildings::remove(std::shared_ptr<buildings::IBuilding> building)
    {
        buildings.erase(std::remove(buildings.begin(), buildings.end(), building), buildings.end());
    }
} // namespace cs::game::map
