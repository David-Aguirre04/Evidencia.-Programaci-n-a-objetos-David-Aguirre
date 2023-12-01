//
// Created by David Aguirre on 24/11/23.
//

#include "Point.h"
#include "cmath"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(double _x, double _y){
    x = _x;
    y = _y;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::setX(double _x) {
    x = _x;
}

void Point::setY(double _y){
    y = _y;
}

double Point::calcdistancia(Point p1, Point p2){
    double x1;
    x1 = p1.getX();
    double x2 = p2.getX();
    double y1 = p1.getY();
    double y2 = p2.getY();
    return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}




