#pragma once
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include <vector>

namespace ariel{
    class Team
    {
    protected:
        Character *leader;
        std::vector<Character *> group;
        int size;
        Character *victim;

        
    public:
        Team(Character *new_char);
        Team();
        void add(Character *new_char);
        int stillAlive();
        void attack(Team *enemy_team);
        std::string print();
        int getsize();
        Character* find(Character *_leader);
        void nleader(Character *_leader);
        void cowboys_attack(Team *enemy_team);
        void ninjas_attack(Team *enemy_team);

    };
 
    

}
