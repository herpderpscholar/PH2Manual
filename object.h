#ifndef OBJECT_H
#define OBJECT_H

#include <vector>

struct Object {
    int obj_id;
    char icon;
    int xy[2];
    char attr[];
};

struct Tile : Object { };

struct Entity : Object { };

struct Player : Entity { };

#endif
