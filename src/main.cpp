#include "Logic.hpp"

int main(void)
{
    cs::game::Game game;
    std::shared_ptr<cs::game::map::Actions> actions = game.getActions();

    actions->addRoad(1, 1);
    actions->addRoad(1, 2);
    actions->addRoad(1, 3);
    actions->addRoad(1, 1);
    actions->addBuilding(3, 1);
    actions->listBuildings();
    actions->listInfos();
    return 0;
}
