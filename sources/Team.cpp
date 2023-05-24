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
Team::Team(){}
Team::~Team(){
    for(Character *member : group)
        delete member;
    group.clear();    
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
int Team::stillAlive(){
    int s = 0;
    for(Character *member : group){
        if(member->isAlive())
            s++;
    }
    return s;
}
void Team::attack(Team *enemy_team){
    Point a{5,0};
    Point b{0,0};
    if(enemy_team == NULL)
        throw std::invalid_argument("null ptr.");
    if(!(leader->isAlive())){
        Character *_leader= find(leader);
        nleader(_leader);

    }
    victim = enemy_team->find(leader);
    cowboys_attack(enemy_team);
    ninjas_attack(enemy_team);

}

void Team::cowboys_attack(Team *enemy_team){
    for (Character *member : group) {        
        if (!(victim->isAlive()))
            victim = enemy_team->find(leader);
        if(member->isCowboy()&&member->isAlive()){
            Cowboy *cowboy = static_cast<Cowboy *>(member);
            if(cowboy->hasboolets())
                cowboy->shoot(victim);
            else
                cowboy->reload(); 
        }
    }
}
void Team::ninjas_attack(Team *enemy_team){
    for (Character *member : group) {       
        if (!(victim->isAlive()))
            victim = enemy_team->find(leader);
        if(member->isNinja()&&member->isAlive()){
            Ninja *ninja = static_cast<Ninja *>(member);
            if (ninja->distance(victim) < 1)
                ninja->slash(victim);
            else
                ninja->move(victim);
        }
    }
}

void Team::print(){
    for(Character *member : group){
        cout<<"team member "<<member->get_hp()<< " " <<member->isAlive()<< " loc - "<<member->getLocation().getx()<<","<<leader->getLocation().gety() <<endl;
        }
}
int Team::getsize(){
    return size;
}
Character* Team::find(Character *_leader){
    Character* temp = _leader;
    double dis = std::numeric_limits<double>::max();
    for (Character* member : group) {
        if(member != _leader && member->isAlive()){
            if(_leader->distance(member) < dis){
                temp = member;
                dis = _leader->distance(member);
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
void Team::print_captain(){
}