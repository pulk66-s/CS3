#include "Logic.hpp"
#include "Logic/Building.hpp"

int main(void)
{
    cs::game::Game game;
    std::shared_ptr<cs::game::map::Actions> actions = game.getActions();

    actions->addRoad(1, 1);
    actions->addRoad(1, 2);
    actions->addRoad(1, 3);
    actions->addRoad(1, 1);
    actions->addBuilding(3, 1);
    actions->addZone<cs::game::buildings::zones::Habitable>(0, 0, 2, 3);
    actions->listBuildings();
    actions->listZones();
    actions->listInfos();
    return 0;
}
