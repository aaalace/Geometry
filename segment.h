#ifndef CONTEST5_GEOMETRY_SEGMENT_H_
#define CONTEST5_GEOMETRY_SEGMENT_H_

#include "ishape.h"
#include "point.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

namespace geometry {

class Segment : IShape {
 public:
  Segment();
  Segment(Point, Point);

  Point p1;
  Point p2;

  Segment* Move(const Vector& vector) override;
  bool ContainsPoint(const Point&) const override;
  bool CrossesSegment(const Segment&) const override;
  Segment* Clone() const override;
  string ToString() const override;

 private:
  static bool OnSegment(const Point& p, const Point& q, const Point& r);
};

}

#endif
