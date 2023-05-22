#include <iostream>
#include "tools.h"

int main() {
    Point start, end;

    std::cout << "Enter the start point for the cut: ";
    start = inputPoint();

    std::cout << "Enter the end point for the cut: ";
    end = inputPoint();

    std::cout << "Executing scalpel command: Cut made between ";
    printPoint(start);
    std::cout << " and ";
    printPoint(end);
    std::cout << std::endl;

    std::cout << "Executing hemostat command: Clamp made at ";
    printPoint(end);
    std::cout << std::endl;

    std::cout << "Executing tweezers command: Tweezers applied at ";
    printPoint(end);
    std::cout << std::endl;

    std::cout << "Enter the start point for the suture: ";
    Point sutureStart = inputPoint();

    std::cout << "Enter the end point for the suture: ";
    Point sutureEnd = inputPoint();

    std::cout << "Executing suture command: Suture made between ";
    printPoint(sutureStart);
    std::cout << " and ";
    printPoint(sutureEnd);
    std::cout << std::endl;

    if (sutureEnd == end) {
        std::cout << "Operation completed successfully." << std::endl;
    } else {
        std::cout << "Error: Suture end point does not match the end point of the cut." << std::endl;
    }

    return 0;
}
