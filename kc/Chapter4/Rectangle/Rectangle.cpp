#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
            :upLeft(x1, y1), bottomRight(x2, y2)
{

}

bool Rectangle::InitMembers(const Point &ul, const Point &br) {
    if ((ul.getX() > br.getX()) || (br.getY() > ul.getY())) {
        cout << "no correct rectangle point" << endl;
        return false;
    }

    Rectangle::upLeft = ul;
    Rectangle::bottomRight = br;

    return true;
}

void Rectangle::ShowRecInfo() const {
    cout << upLeft.getX() << "," << upLeft.getY() << endl;
    cout << bottomRight.getX() << "," << bottomRight.getY() << endl;
}