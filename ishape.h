#ifndef CONTEST5_GEOMETRY_I_SHAPE_H_
#define CONTEST5_GEOMETRY_I_SHAPE_H_

#include "vector.h"
#include <string>
using std::string;

namespace geometry {

class Point;
class Segment;
class Line;
class Ray;
class Polygon;
class Circle;

class IShape {
  [[maybe_unused]] virtual IShape* Move(const Vector&) = 0;
  [[maybe_unused]] virtual bool ContainsPoint(const Point&) const = 0;
  [[maybe_unused]] virtual bool CrossesSegment(const Segment&) const = 0;
  [[maybe_unused]] virtual IShape* Clone() const = 0;
  [[maybe_unused]] virtual string ToString() const = 0;
};

}

#endif
