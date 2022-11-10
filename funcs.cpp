#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include "3d-space.h"

// add functions here

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    if(length(p1) > length(p2)) {
        return p1;
    } else {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
    ppos->x = ppos->x + pvel->x * dt;
    ppos->y = ppos->y + pvel->y * dt;
    ppos->z = ppos->z + pvel->z * dt;
}

Coord3D* createCoord3D(double x, double y, double z) {
    Coord3D *cords = new Coord3D();
    cords->x = x;
    cords->y = y;
    cords->z = z;
    return cords;
}

// free memory
void deleteCoord3D(Coord3D *p) {
    delete p;
}
