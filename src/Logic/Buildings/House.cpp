#include "Logic/Buildings/House.hpp"

namespace cs::game::buildings
{
    House::House(): House(0, 0) {};

    House::House(int x, int y): ABuilding(x, y)
    {
        this->setName("House");
    }

    void House::build(map::Infos &infos)
    {
        infos.pop().add(this->population);
    }
} // namespace cs::game::buildings
