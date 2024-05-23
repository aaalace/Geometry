#include "../point.h"

namespace geometry {

Point::Point() = default;

Point::Point(int64_t x, int64_t y) : x(x), y(y) {}

Point* Point::Move(const Vector& vector) {

}

bool Point::ContainsPoint(const Point&) {

}

bool Point::CrossesSegment(const Segment&) {

}

IShape* Point::Clone() {

}

void Point::ToString() {

}

// overload: p1 - p2 = vector

Vector Point::operator-(Point &p2) {

}

}