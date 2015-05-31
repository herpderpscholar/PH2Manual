#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <ncurses.h>
#include "object.h"

class Graphics {
    public:
        Graphics(); // Constructor
        ~Graphics(); // Destructor
        void draw(std::vector<Tile>,std::vector<Entity>);

        void testDraw(std::vector<Tile>,std::vector<Entity>,char[]); // test function, ignore me

    private:
        int i; // generic counter
        int rows, cols; // width & height of the terminal screen
};

#endif
