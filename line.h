#ifndef CONTEST5_GEOMETRY_LINE_H_
#define CONTEST5_GEOMETRY_LINE_H_

#include "ishape.h"
#include "point.h"

namespace geometry {

class Line : IShape {
 public:
  Line();
  Line(Point , Point);
};

}

#endif