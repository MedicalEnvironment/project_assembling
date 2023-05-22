#ifndef POINT_H
#define POINT_H

struct Point {
    double x;
    double y;
};

bool operator==(const Point& p1, const Point& p2);

Point inputPoint();
void printPoint(const Point& point);

#endif  // POINT_H
