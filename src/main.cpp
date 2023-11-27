#include "Logic.hpp"

int main(void)
{
    cs::game::Game game;
    std::shared_ptr<cs::game::map::Actions> actions = game.getActions();

    actions->addRoad(1, 1);
    actions->addRoad(2, 2);
    actions->addRoad(3, 3);
    actions->addBuilding(4, 4);
    actions->listBuildings();
    actions->listInfos();
    return 0;
}
