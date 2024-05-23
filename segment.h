#ifndef CONTEST5_GEOMETRY_SEGMENT_H_
#define CONTEST5_GEOMETRY_SEGMENT_H_

#include "ishape.h"
#include "point.h"

namespace geometry {

class Segment : IShape {
 public:
  Segment();
  Segment(Point , Point);
};

}

#endif
