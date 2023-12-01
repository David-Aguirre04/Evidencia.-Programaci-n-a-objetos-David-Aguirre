//
// Created by David Aguirre on 24/11/23.
//

#ifndef TRIANGULO_POINT_H
#define TRIANGULO_POINT_H

#include "iostream"
using namespace std;

class Point {
private:
    double x, y;

public:
    Point();
    Point(double x, double y);
    void setX(double _x);
    void setY(double _y);
    double getX();
    double getY();

    double calcdistancia(Point p1, Point p2);
};




#endif //TRIANGULO_POINT_H
