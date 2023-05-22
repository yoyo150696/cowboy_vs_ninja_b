#pragma once
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include <vector>

namespace ariel{
    class Team
    {
    private:
        Character *leader;
        std::vector<Character *> group;
        int size;

        
    public:
        Team(Character *new_char);
        void add(Character *new_char);
        int stillAlive();
        void attack(Team *enemy_team);
        std::string print();
        int getsize();
    };
 
    

}
