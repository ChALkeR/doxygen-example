#include "area.h"

double rectangle_area(double width, double height) {
  return width * height;
}

double circle_area(double radius) {
  double pi = acos(-1.);
  return pi * radius * radius / 2.;
}
