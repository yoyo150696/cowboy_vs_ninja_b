#include "Cowboy.hpp"

using namespace ariel;
using namespace std;

Cowboy::Cowboy(string name,Point loc){
    Character(name,loc,110);
}
    void Cowboy::shoot(Character* other){}
    bool Cowboy::hasboolets(){return false;}
    void Cowboy::reload(){}