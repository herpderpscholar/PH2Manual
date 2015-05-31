#include "gameFactory.h"

    ////////////////////
    // Test-functions //
    ////////////////////
std::vector<Tile> testTiles() { // return a 'room' of tiles
    std::vector<Tile> obj;
    int x,y;
    for (x = 0; x<10; x++) {
        for (y = 0; y<10; y++) {
            if (x==0||x==9||y==0||y==9) {
                Tile o = Tile();
                o.xy[0] = x+1;
                o.xy[1] = y+1;
                o.icon = '#';
                obj.push_back(o);
            }
        }
    }
    // Add tiles
    return obj;
}

// create a player object
std::vector<Entity> testPlayer() {
    std::vector<Entity> obj;
    Entity o = Player();
    o.xy[0] = 1;
    o.xy[1] = 1;
    o.icon = '@';
    obj.push_back(o);
    return obj;
}
    //
    // end test functions
    //


GameFactory::GameFactory() {
    tile_set = testTiles();
    entity_set = testPlayer();
}
GameFactory::~GameFactory() {}

std::vector<Tile> GameFactory::getTiles() {
    return tile_set;
}

std::vector<Entity> GameFactory::getEntities() {
    return entity_set;
}

void GameFactory::advance() { // this will turn into the 'action' command for player
    int c = getch();
    switch (c) {
        case KEY_UP:
            entity_set[0].xy[0]--;
            break;
        case KEY_DOWN:
            entity_set[0].xy[0]++;
            break;
        case KEY_LEFT:
            entity_set[0].xy[1]--;
            break;
        case KEY_RIGHT:
            entity_set[0].xy[1]++;
            break;
    }
}
/*
char* GameFactory::tAdvance() {
    int c = getch();
    char msg[];
    switch (c) {
        case KEY_UP:
            msg = ['U','p'];
            break;
        case KEY_ENTER:
            msg = ['E','n','t','e','r','.'];
            break;
        default:
            msg = ['N','o','n','e'];
    }
    return msg;
} */
