#include "Logic/Map/Actions.hpp"
#include <iostream>

namespace cs::game::map
{
    void Actions::addRoad(int x, int y)
    {
        std::shared_ptr<buildings::IBuilding> road = std::make_shared<buildings::Road>(x, y);

        this->map->buildings().add(road);
    }

    void Actions::listBuildings()
    {
        std::cout << "============" << std::endl;
        std::cout << "All Buildings" << std::endl;
        for (std::shared_ptr<buildings::IBuilding> b : this->map->buildings()) {
            std::cout << "- " << b->id() << " " << b->name()
                << ": ((" << b->position().x() << ", "
                << b->position().y() << "),("
                << b->size().x() << ", " << b->size().y() << "))"
            << std::endl;
        }
        std::cout << "============" << std::endl;
    }
} // namespace cs::game::map
