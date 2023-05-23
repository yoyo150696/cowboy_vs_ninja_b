#pragma once
#include "Character.hpp"
#include <iostream>
namespace ariel{
    class Cowboy : public Character
    {
    private:
        int boolets;
        int bs;
    public:
        Cowboy(std::string name,Point loc);
        void shoot(Character* other);
        bool hasboolets();
        void reload();
    };
}
