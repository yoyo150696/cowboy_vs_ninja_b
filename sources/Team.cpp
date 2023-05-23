#include "Team.hpp"
#include <limits>

using namespace ariel;
using namespace std;

Team::Team(Character *_leader){
    if (_leader->cap || _leader->belong)
        throw std::runtime_error("error");        
    leader = _leader;
    _leader->cap = true;
    size = 0;
    add(_leader);
    _leader->belong = true;


}
Team::Team(){

}
void Team::add(Character *new_member){
    
    if (size >= 10 || new_member->belong)
        throw std::runtime_error("cannot be more than 10.");
    else{
        group.push_back(new_member);
        size++;
    }
    new_member->belong = true;
}
int Team::stillAlive(){return size;}
void Team::attack(Team *enemy_team){
    if(enemy_team == NULL)
        throw std::invalid_argument("null ptr.");
    if(!leader->isAlive()){
        Character *_leader= find(leader);
        nleader(_leader);
    }
    Character *victim = enemy_team->find(leader);
    

}
string Team::print(){return "";}
int Team::getsize(){
    return size;
}
Character* Team::find(Character *_leader){
    Character* temp = _leader;
    double dis = std::numeric_limits<double>::max();
    for (Character* member : group) {
        if(member != _leader && member->isAlive()){
            if(leader->distance(member) < dis){
                temp = member;
                dis = leader->distance(member);
            }
        }
    }
    return temp;
}
void Team::nleader(Character *_leader){
    leader->cap = false;
    leader = _leader;
    leader->cap = true;


}