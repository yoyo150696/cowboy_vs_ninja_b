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
    return false;
    }
double Character::distance(Character *other){
    return loc.distance(other->loc);
}
void Character::hit(int num){
    if(num < 0){
        throw std::invalid_argument("neagative value.");
    }
}
string Character::getName(){
    return name;
}
Point& Character::getLocation(){
    return loc;
}
std::string Character::print(){
    return "";
}
int Character::get_hp(){
    return hp;
}
void Character::damage(){
    hp -= 10;
}
bool Character::isCowboy(){
    return _cobwoy;
}
bool Character::isNinja(){
    return _ninja;
}
