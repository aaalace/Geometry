#ifndef CONTEST5_GEOMETRY_POLYGON_H_
#define CONTEST5_GEOMETRY_POLYGON_H_

#include <vector>
using std::vector;
#include "ishape.h"
#include "point.h"

namespace geometry {

class Polygon {
 public:
  Polygon();
  Polygon(vector<Point>);
};

}

#endif