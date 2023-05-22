#include "Ninja.hpp"

using namespace ariel;
using namespace std;

Ninja::Ninja(){}
Ninja::Ninja(string name,Point& loc,int healthp){
    Character(name,loc,healthp);
}
void Ninja::move(Character *enemy){}
void Ninja::slash(Character *enemy){}
