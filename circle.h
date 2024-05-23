#ifndef CONTEST5_GEOMETRY_CIRCLE_H_
#define CONTEST5_GEOMETRY_CIRCLE_H_

#include <cstdint>
#include "ishape.h"
#include "point.h"

namespace geometry {

class Circle {
 public:
  Circle();
  Circle(Point, int64_t);
};

}

#endif