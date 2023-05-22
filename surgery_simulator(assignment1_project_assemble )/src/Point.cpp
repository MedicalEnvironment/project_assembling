#include "tools.h"
#include <iostream>

bool operator==(const Point& p1, const Point& p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

Point inputPoint() {
    Point point;
    std::cout << "Enter the X coordinate: ";
    std::cin >> point.x;
    std::cout << "Enter the Y coordinate: ";
    std::cin >> point.y;
    return point;
}

void printPoint(const Point& point) {
    std::cout << "(" << point.x << ", " << point.y << ")";
}
