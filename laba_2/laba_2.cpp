//
// Created by yasyasub on 06.05.19.
//

#include <iostream>
#include "stdlib.h"
#include "map"

template <typename TTT>
class Demo{
public:
    TTT data;
};

struct Point { int x, y; } p1 = {20, 30};
int main() {
    Demo<double> d;
    Demo<int> d2;
    d.data = 2.5;
    d2.data = 2;
    Demo<Point> d3;
    d3.data = p1;
    Demo<Demo<int>> d4;
    d4.data.data = 56;
    std::pair<int, double> ppp;
    return 0;
}