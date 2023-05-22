#include "Team.hpp"

using namespace ariel;
using namespace std;

Team::Team(Character *theleader){
    leader = theleader;
    this->add(theleader);

}
void Team::add(Character *new_member){
    if (size < 10)
        group.push_back(new_member);
}
int Team::stillAlive(){return 0;}
void Team::attack(Team *enemy_team){}
string Team::print(){return "";}
int Team::getsize(){
    return size;
}