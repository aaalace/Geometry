#ifndef CONTEST5_GEOMETRY_LINE_H_
#define CONTEST5_GEOMETRY_LINE_H_

#include "ishape.h"
#include "point.h"
#include "segment.h"
#include <cstdint>

namespace geometry {

class Line : IShape {
 public:
  Line();
  Line(Point , Point);
  Line(int64_t, int64_t, int64_t);

  int64_t a;
  int64_t b;
  int64_t c;

  Line* Move(const Vector& vector) override;
  bool ContainsPoint(const Point&) const override;
  bool CrossesSegment(const Segment&) const override;
  Line* Clone() const override;
  string ToString() const override;
};

}

#endif