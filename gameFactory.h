#ifndef GAMEFACTORY_H
#define GAMEFACTORY_H

#include "object.h"
#include <ncurses.h>
#include <map>

class GameFactory {
    public:
        GameFactory();
        ~GameFactory();
        std::vector<Tile> getTiles();
        std::vector<Entity> getEntities();
        void advance();
//        char* tAdvance();
    private:
        std::vector<Entity> entity_set;
        std::vector<Tile> tile_set;
};

#endif
