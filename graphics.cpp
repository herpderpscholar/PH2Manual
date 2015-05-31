#include "graphics.h"

Graphics::Graphics() {
    initscr();
    clear();
    noecho();
    curs_set(false);
    keypad(stdscr, TRUE);
}

Graphics::~Graphics() {
    printw("\nDestructor called!\n");
    getch();
    endwin();
}

void Graphics::draw(std::vector<Tile> map,std::vector<Entity> ents) {
    clear();
    for (i=0;i<map.size();i++) {
        mvaddch(map[i].xy[0],map[i].xy[1],map[i].icon);
    }
    for (i=0;i<ents.size();i++) {
        mvaddch(ents[i].xy[0],ents[i].xy[1],ents[i].icon);
    }
//    refresh();
}

void Graphics::testDraw(std::vector<Tile> map,std::vector<Entity> ents,char msg[]) {
    clear();
    for (i=0;i<map.size();i++) {
        mvaddch(map[i].xy[0],map[i].xy[1],map[i].icon);
    }
    for (i=0;i<ents.size();i++) {
        mvaddch(ents[i].xy[0],ents[i].xy[1],ents[i].icon);
    }
    mvprintw(22,1,msg);
//    refresh();
}
