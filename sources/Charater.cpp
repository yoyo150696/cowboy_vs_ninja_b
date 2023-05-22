#include "Character.hpp"
using namespace ariel;
using namespace std;

Character::Character(){}
Character::Character(string tname,Point& tloc,int healthp){
    name = tname;
    loc = tloc;
    hp = healthp;
    cap = false;
    belong = false;
}
bool Character::isAlive(){
    if (hp > 0)
        return true;
    return false;}
double Character::distance(Character *other){
    return 0;
}
void Character::hit(int num){}
string Character::getName(){
    return name;
}
Point& Character::getLocation(){
    return loc;
}
string Character::print(){
    return "";
}
int Character::get_hp(){
    return hp;
}
