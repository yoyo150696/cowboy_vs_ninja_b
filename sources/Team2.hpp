#pragma once
#include "Team.hpp"

namespace ariel{
    class Team2 : public Team{
        public:
            Team2(Character *pleader);
            void attack(Team* enemy_team) override;
            void print()override;
    };
}