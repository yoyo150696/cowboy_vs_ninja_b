#pragma once
#include "Point.hpp"
#include "Character.hpp"
#include <iostream>
namespace ariel{
    class Ninja : public Character
    {
        private:
            int speed;
        public:
            Ninja();
            Ninja(std::string name,Point& loc,int healthp,int _speed);
            void move(Character *enemy);
            void slash(Character *enemy);

    };

}



