#include "Point.h"
#include <iostream>

using namespace std;


Point::Point(const int &xpos, const int &ypos) {
    x = xpos;
    y = ypos;
}

bool Point::InitMembers(int xpos, int ypos) {
    if (xpos < 0 || ypos < 0){
        cout << "index out of error" << endl;
        return false;
    }

    Point::x = xpos;
    Point::y = ypos;

    return true;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

bool Point::setX(int xpos) {
    if (0 > xpos || xpos > 100) {
        cout << "x index out of error" << endl;
        return false;
    }

    Point::x = xpos;

    return true;
}

bool Point::setY(int ypos) {
    if (0 > ypos || ypos > 100)
    {
        cout << "y index out of error" << endl;
        return false;
    }

    Point::y = ypos;

    return true;
}