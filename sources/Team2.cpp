#include "Team2.hpp"

using namespace ariel;
using namespace std;

Team2::Team2(Character *pleader):Team{pleader}{}

void Team2::attack(Team* enemy_team) {
    if (enemy_team == nullptr)
        throw std::invalid_argument("null ptr.");

    if (!(leader->isAlive())) {
        Character* _leader = find(leader);
        nleader(_leader);
    }
    Character* victim = enemy_team->find(leader);
    for (Character* member : group) {
        if (member->isAlive()) {
            if (!victim->isAlive())
                victim = enemy_team->find(leader);

            if (member->isCowboy()) {
                Cowboy* cowboy = static_cast<Cowboy*>(member);
                if(cowboy->hasboolets())
                    cowboy->shoot(victim);
                else
                    cowboy->reload(); 
            } else {
                Ninja* ninja = static_cast<Ninja*>(member);
                if (ninja->distance(victim) < 1)
                    ninja->slash(victim);
                else
                    ninja->move(victim);
            }
        }
    }
}
void Team2::print(){
    for(Character *member : group){
        cout<<"team2 member "<<member->get_hp()<<" "<<member->isAlive()<< " loc - "<<member->getLocation().getx()<<","<<leader->getLocation().gety()<< endl;
        } 
}
