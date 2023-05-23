#include "Ninja.hpp"

using namespace ariel;
using namespace std;

Ninja::Ninja(){}
Ninja::Ninja(string tname,Point& tloc,int healthp,int _speed):Character(tname,tloc,healthp){
    speed = _speed;
    _ninja = true;
}
void Ninja::move(Character *enemy){
    loc = Point::moveTowards(loc,enemy->loc,speed);
}
void Ninja::slash(Character *enemy){
    if(isAlive() && enemy->isAlive()&& this != enemy){
        if(loc.distance(enemy->loc) < 1){
            enemy->hp -= 40;
        }
    }
    else{
        throw std::runtime_error("");
    }  
}