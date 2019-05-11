#ifndef CHAPTER4_RECTANGLE_H
#define CHAPTER4_RECTANGLE_H

#include "Point.h"

class Rectangle {
private:
    Point upLeft;
    Point bottomRight;

public:
    Rectangle (const int &x1, const int &y1, const int &x2, const int &y2);

    bool InitMembers(const Point &ul, const Point &br);

    void ShowRecInfo() const;

};


#endif //CHAPTER4_RECTANGLE_H
