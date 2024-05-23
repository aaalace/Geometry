#ifndef CONTEST5_GEOMETRY_POINT_H_
#define CONTEST5_GEOMETRY_POINT_H_

#include "ishape.h"
#include "vector.h"
#include <cstdint>
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

namespace geometry {

class Point : public IShape {
 public:
  Point();
  Point(int64_t , int64_t);

  int64_t x;
  int64_t y;

  Point* Move(const Vector& vector) override;
  bool ContainsPoint(const Point&) const override;
  bool CrossesSegment(const Segment&) const override;
  Point* Clone() const override;
  string ToString() const override;

  Vector operator-(const Point& p2) const;
};

}

#endif
