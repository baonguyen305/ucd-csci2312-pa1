// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
  double x;
  double y;
  double z;                     // 3-d grid triangle

public:
  // Constructors
  Point();                      // default constructor
  Point(double x, double y, double z);    // three-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double newX);
  void setY(double newY);
  void setZ(double newZ);

    double distanceTo(Point &test);

  // Accessor methods
  double getX();
  double getY();
  double getZ();
};

#endif // __point_h