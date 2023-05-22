#include "Team.hpp"

using namespace ariel;
using namespace std;

Team::Team(Character *theleader){
    if (theleader->cap == true || theleader->belong == true)
        throw std::runtime_error("error");        
    leader = theleader;
    theleader->cap = true;
    size = 0;
    add(theleader);
    theleader->belong = true;


}
Team::Team(){

}
void Team::add(Character *new_member){
    
    if (size >= 10 || new_member->belong == true)
        throw std::runtime_error("cannot be more than 10.");
    else{
        group.push_back(new_member);
        size++;
    }
}
int Team::stillAlive(){return size;}
void Team::attack(Team *enemy_team){}
string Team::print(){return "";}
int Team::getsize(){
    return size;
}