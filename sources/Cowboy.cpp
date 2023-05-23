#include "Cowboy.hpp"

using namespace ariel;
using namespace std;

Cowboy::Cowboy(string tname,Point tloc):Character(tname,tloc,110){
    boolets = 6;
    _cobwoy = true;
}

    void Cowboy::shoot(Character* other){
        if(isAlive() &&  other->isAlive()&& this != other){
            if(hasboolets()){
                other->damage();
                boolets--;
            }
        }
        else
            throw std::runtime_error("");

    }
    bool Cowboy::hasboolets(){
    if (boolets > 0)    
        return true;
    return false;}
    void Cowboy::reload(){
        if(!isAlive())
            throw std::runtime_error("dead cowboy.");
        boolets = 6;
    }
