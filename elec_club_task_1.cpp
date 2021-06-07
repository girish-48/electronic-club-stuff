#include<iostream>
#include<math.h>
using namespace std;

class Vec3
{
  public:
  float X,Y,Z;
  Vec3()
  {
      X=0;
      Y=0;
      Z=0;
  }
  void normalize()
  {
       float S = X*X + Y*Y + Z*Z;
       X = X/S;
       Y = Y/S;
       Z = Z/S;
       return; 
  }
  Vec3 add(Vec3 b)
  {
    Vec3 c; 
    c.X = X + b.X;
    c.Y = Y + b.Y;
    c.Z = Z + b.Z;
    return(c);
  }
  Vec3 subtract(Vec3 b)
  {
      Vec3 c;
      c.X = X + b.X;
      c.Y = Y + b.Y;
      c.Z = Z + b.Z;
      return(c);
  }
  float dot(Vec3 b)
  {
    return( X*b.X + Y*b.Y + Z*b.Z);
  }
  Vec3 cross(Vec3 b)
  {
    Vec3 c;
      c.X = Y*b.Z - Z*b.Y;
      c.Y = Z*b.X - X*b.Z;
      c.Z = X*b.Y - Y*b.X;
      return(c);
  }
}n;

class Sphere
{
  float radius;
  Vec3 centre;
  public:
  Sphere()
  {
    radius = 0;
    centre = Vec3();
  }
  Vec3 Point, Direction;
  string calculate()
  { 
    Vec3 a;
    a.X = centre.X - Point.X;
    a.Y = centre.Y - Point.Y;
    a.Z = centre.Z - Point.Z;
    float distance = sqrt(pow(a.X,2)+pow(a.Y,2)+pow(a.Z,2));
    a.normalize();
    Direction.normalize();
    if(  (sqrt(pow(distance,2)-pow(radius,2))/distance) >= a.dot(Direction) && a.dot(Direction) > 0 )
     return "yes";
    else return "no";
  }
};

