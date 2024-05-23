#include "../point.h"
#include "../segment.h"

namespace geometry {

Point::Point() = default;

Point::Point(int64_t x, int64_t y) : x(x), y(y) {}

Point* Point::Move(const Vector& vector) {
  this->x += vector.x;
  this->y += vector.y;
  return this;
}

bool Point::ContainsPoint(const Point& point) const {
  return this->x == point.x && this->y == point.y;
}

bool Point::CrossesSegment(const Segment& segment) const {
  Vector ap = *this - segment.p1;
  Vector pb = segment.p2 - *this;
  return ap.ScalarProduct(pb) >= 0 && ap.VectorProduct(pb) == 0;
}

Point* Point::Clone() const {
  auto* new_point = new Point(this->x, this->y);
  return new_point;
}

string Point::ToString() const {
  stringstream ss;
  ss << "Point(" << this->x << ", " << this->y << ")";
  std::string str = ss.str();
  return str;
}

// overload: p1 - p2 = vector
Vector Point::operator-(const Point& p2) const {
  return {p2.x - this->x, p2.y - this->y};
}

}