#include <iostream>
#include "Rectangle/Point.h"
#include "Rectangle/Rectangle.h"

using namespace std;

int main() {
//    Point pos1;
//    Point pos2;
//
//    pos1.InitMembers(2, 4);
//    pos2.InitMembers(4, 2);
//
//    Rectangle rec;
//    rec.InitMembers(pos1, pos2);
//    rec.ShowRecInfo();

    Rectangle rec(1, 5, 5, 1);
    rec.ShowRecInfo();

    return 0;
}