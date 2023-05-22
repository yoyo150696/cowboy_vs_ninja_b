#include "Ninja.hpp"

using namespace ariel;
using namespace std;

Ninja::Ninja(){}
Ninja::Ninja(string tname,Point& tloc,int healthp):Character(tname,tloc,healthp){}
void Ninja::move(Character *enemy){}
void Ninja::slash(Character *enemy){}
