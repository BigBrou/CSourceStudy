#ifndef CHAPTER4_POINT_H
#define CHAPTER4_POINT_H


class Point {
private:
    int x;
    int y;

public:
    Point (const int &xpos, const int &ypos);

    bool InitMembers(int xpos, int ypos);

    int getX() const;

    int getY() const;

    bool setX(int xpos);

    bool setY(int ypos);
};


#endif //CHAPTER4_POINT_H
