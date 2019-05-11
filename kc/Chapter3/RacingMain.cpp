#include <iostream>
#include "Car/Car.h"

int main() {
    using namespace CAR_CLASS;

    Car run99;
    run99.InitMembers("run99", 100);
    run99.ShowCarState();

    run99.Accel();
    run99.ShowCarState();

    run99.Break();
    run99.ShowCarState();

    return 0;
}