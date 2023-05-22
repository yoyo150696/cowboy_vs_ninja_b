#pragma once
#include "Point.hpp"
#include <iostream>
namespace ariel{
    class Character{
        private:
            Point loc;
            std::string name;
            int hp;

        public:
            Character();
            Character(std::string tname,Point& loc,int healthp);
            bool isAlive();
            double distance(Character *other);
            void hit(int num);
            std::string getName();
            Point& getLocation();
            std::string print(); 
            int get_hp();
        

    };
}