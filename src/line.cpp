#include "../line.h"

namespace geometry {

Line::Line() = default;

Line::Line(Point p1, Point p2) {
  this->a = p2.y - p1.y;
  this->b = p1.x - p2.x;
  this->c = p2.x * p1.y - p1.x * p2.y;
}

Line::Line(int64_t a, int64_t b, int64_t c) : a(a), b(b), c(c) {}

Line* Line::Move(const Vector& vector) {
  this->c -= this->a * vector.x + this->b * vector.y;
  return this;
};

bool Line::ContainsPoint(const Point& point) const {
  return this->a * point.x + this->b * point.y + this->c == 0;
}

bool Line::CrossesSegment(const Segment& segment) const {
  // check if points on different sides
  int64_t side1 = this->a * segment.p1.x + this->b * segment.p1.y + this->c;
  int64_t side2 = this->a * segment.p2.x + this->b * segment.p2.y + this->c;
  return side1 * side2 <= 0;
}

Line* Line::Clone() const {
  auto* new_line = new Line(this->a, this->b, this->c);
  return new_line;
}

string Line::ToString() const {
  stringstream ss;
  ss << "Line(" << this->a << ", " << this->b << ", " << this->c << ")";
  std::string str = ss.str();
  return str;
}

} // geometry