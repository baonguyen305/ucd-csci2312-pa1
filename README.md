## CSCI 2312: Programming Assignment 1

_working with objects_

* * *

Point.Hh
```c++
private:
double x;
double y;
double z;                     // add in Z for the 3rd dimension grid

public:
// Constructors
Point();                      // default constructor
Point(double x, double y, double z);    // Three-argument constructor

// Destructor
~Point();

// Mutator methods
void setX(double newX);
void setY(double newY);
void setZ(double newZ);       //new mutator for z

// Accessor methods
double getX();
double getY();
double getZ();                //new accessor for z
};
```

Point.cpp
```c++
#include "Point.h"
#include <cmath>              //include cmath to use sqrt and pow()
.
.
.

double Point::distanceTo(Point &test){              
//function used to find distance from point (x1,y1,z1) to point (x2,y2,z2)
  return sqrt(pow(test.getX()-(x),2) + (pow(test.getY()-(y),2)) + (pow(test.getZ()-(z),2))); 
  //function sqrt((x1-x2)squared + (y1-y2)squared + (z1-z2)squared)
}
```
Main or pa1.cpp
```c++

#include "Point.h"
#include <iostream>
#include <cmath>              //include cmath for sqrt
#include <iomanip>            //include iomanip for setprecision

using namespace std;

double computeArea(Point &, Point &, Point &);      
//function use to find area of trying passing 3 points as reference

int main(void) {
    Point a, b, c;                  //3 points of the triangle
    double test1;                   //temporary variable to hold the input
    cout << fixed << setprecision(2);   // set decimal point to 2

//////////
.         //asking users input Xs, Ys, and Zs and cin >> temp
.         
.
//////////

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
```
