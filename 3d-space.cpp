#include <iostream>
#include <cmath>
#include "coord3d.h"

double length(Coord3D *p) {
    double sum = 0;
    sum += pow(p->x,2);
    sum += pow(p->y,2);
    sum += pow(p->z,2);
    return (int)(sqrt(sum) * 10000 + .5) / 10000.0;
}

