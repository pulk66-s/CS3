#pragma once

namespace cs::game
{
    namespace buildings
    {
        class IBuilding;
        class ABuilding;
        class Road;
    } // namespace buildings
    namespace map
    {
        class Map;
        class Position;
        class Buildings;
        class Actions;
    } // namespace map
    namespace geometry
    {
        class Point;
        class Area;
    } // namespace geometry
    class Name;
    class Entity;

    template <typename T>
    class MyIterator;
} // namespace cs::game
