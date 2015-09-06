//
// Created by Ivo Georgiev on 8/25/15.
//

#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double computeArea(Point &, Point &, Point &);

int main(void) {
    Point a, b, c;                  //3 points of the triangle
    double test1;                   //temporary variable to hold the input
    cout << fixed << setprecision(2);

    cout << "input coordinate x, y, z for PointA" << endl;
    cin >> test1;                   //set input into temp
    a.setX(test1);                  //passing temp into x of Pnt a
    cin >> test1;
    a.setY(test1);
    cin >> test1;
    a.setZ(test1);
    cout << "pointA coordinate: " << a.getX() << ", " << a.getY() << ", " << a.getZ() << endl;          //printing out coordinates of pnt a just to make sure it is passed successfully

    cout << "input coordinate x, y, z for Point B" << endl;
    cin >> test1;
    b.setX(test1);
    cin >> test1;
    b.setY(test1);
    cin >> test1;
    b.setZ(test1);
    cout << "pointB coordinate: " << b.getX() << ", " << b.getY() << ", " << b.getZ() << endl;

    cout << "input coordinate x, y, z for PointC" << endl;
    cin >> test1;
    c.setX(test1);
    cin >> test1;
    c.setY(test1);
    cin >> test1;
    c.setZ(test1);
    cout << "pointC coordinate: " << c.getX() << ", " << c.getY() << ", " << c.getZ() << endl;

    cout << "The area of the input triangle ABC is " << computeArea(a, b, c) << " unit squared" << endl;        //calling the function to calculate the area

    return 0;
}

double computeArea(Point &a, Point &b, Point &c){                   // passing by referene of 3 points
    double l, m, n, o;
    l = a.distanceTo(b);            // setting distance from 1 point to another (length AB
    m = b.distanceTo(c);            // length BC
    n = c.distanceTo(a);            // length CA
    o = ((l + m + n) / 2);          // finding semiperimeter for area of triangle using Heron's Formula
    return sqrt(o * (o - l) * (o - m) * (o - n));   //finding area with semiperimeter using Heron's Formula
}