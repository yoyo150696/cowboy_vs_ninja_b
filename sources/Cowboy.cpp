#include "Cowboy.hpp"

using namespace ariel;
using namespace std;

Cowboy::Cowboy(string tname,Point tloc):Character(tname,tloc,110){
    boolets = true;
}
    void Cowboy::shoot(Character* other){}
    bool Cowboy::hasboolets(){
    if (boolets > 0)    
        return true;
    return false;}
    void Cowboy::reload(){}