#include "Logic/Buildings/House.hpp"

namespace cs::game::buildings
{
    House::House(): House(0, 0) {};

    House::House(int x, int y): House(x, y, 1, 1) {}

    House::House(int x, int y, int w, int h)
        : House(geometry::Point(x, y), geometry::Point(w, h)) {}

    House::House(geometry::Point position, geometry::Point size): ABuilding(position, size)
    {
        this->setName("House");
    }

    bool House::build(map::Infos &infos) {
        if (!ABuilding::build(infos)) {
            return false;
        }
        infos.pop().add(this->population);
        return true;
    }
} // namespace cs::game::buildings
