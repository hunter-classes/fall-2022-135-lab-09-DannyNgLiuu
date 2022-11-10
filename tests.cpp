#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "3d-space.h"

// add your tests here

TEST_CASE("Task A"){
    Coord3D point1 = {10, 20, 30};
    Coord3D point2 = {4, 4, 4};

    CHECK(length(&point1) == 37.4166);
    CHECK(length(&point2) == 6.9282);
}

TEST_CASE("Task B") {
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {4, 4, 4};
	CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
}

TEST_CASE("Task C") {
	Coord3D pos = {0, 0, 10.0};
	Coord3D vel = {2, -10, .2};
    
	move(&pos, &vel, 2.0);
	CHECK(pos.x == 4);
	CHECK(pos.y == -20);
	CHECK(pos.z == 10.4);
}