#include "Team2.hpp"

using namespace ariel;

Team2::Team2(Character *pleader):Team{pleader}{}

void Team2::attack(Team *enemy_team){
    if(enemy_team == NULL)
        throw std::invalid_argument("null ptr.");
    if(!leader->isAlive()){
        Character *_leader= find(leader);
        nleader(_leader);
    }
    victim = enemy_team->find(leader);
     for (Character *member : group) {        
        if (!(victim->isAlive()))
            victim = enemy_team->find(leader);
        if(member->isCowboy()){
            Cowboy *cowboy = static_cast<Cowboy *>(member);
            cowboy->shoot(victim);
        }
        else{
            Ninja *ninja = static_cast<Ninja *>(member);
            if (ninja->distance(victim) < 1)
                ninja->slash(victim);
            else
                ninja->move(victim);
        }
        
    }
}