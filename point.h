#ifndef CONTEST5_GEOMETRY_POINT_H_
#define CONTEST5_GEOMETRY_POINT_H_

#include <cstdint>
#include "vector.h"
#include "ishape.h"

namespace geometry {

class Point : public IShape {
 public:
  Point();
  Point(int64_t , int64_t);

  int64_t x;
  int64_t y;

  Point* Move(const Vector& vector) override;
  bool ContainsPoint(const Point&) override;
  bool CrossesSegment(const Segment&) override;
  IShape* Clone() override;
  void ToString() override;

  Vector operator-(Point& p2);
};

}

#endif
