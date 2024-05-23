#ifndef CONTEST5_GEOMETRY_I_SHAPE_H_
#define CONTEST5_GEOMETRY_I_SHAPE_H_

#include "vector.h"

namespace geometry {

class Point;
class Segment;
class Line;
class Ray;
class Polygon;
class Circle;


class IShape {
  [[maybe_unused]] virtual IShape* Move(const Vector&) = 0;
  [[maybe_unused]] virtual bool ContainsPoint(const Point&) = 0;
  [[maybe_unused]] virtual bool CrossesSegment(const Segment&) = 0;
  [[maybe_unused]] virtual IShape* Clone() = 0;
  [[maybe_unused]] virtual void ToString() = 0;
};

}

#endif
