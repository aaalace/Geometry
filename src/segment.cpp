#include "../segment.h"

namespace geometry {

Segment::Segment() = default;

Segment::Segment(Point p1, Point p2) : p1(p1), p2(p2) {}

Segment* Segment::Move(const Vector& vector) {
  p1.Move(vector);
  p2.Move(vector);
  return this;
}

bool Segment::ContainsPoint(const Point& point) const {
  return point.CrossesSegment(*this);
}

bool Segment::CrossesSegment(const Segment& segment) const {
  Vector v1 = segment.p1 - this->p1;
  Vector v2 = this->p2 - this->p1;
  Vector v3 = segment.p2 - this->p1;
  Vector v4 = this->p2 - segment.p2;
  Vector v5 = this->p2 - this->p1;
  Vector v6 = segment.p1 - segment.p2;

  int64_t d1 = v1.CrossProduct(v2);
  int64_t d2 = v1.CrossProduct(v3);
  int64_t d3 = v4.CrossProduct(v5);
  int64_t d4 = v4.CrossProduct(v6);

  if (d1 * d2 < 0 && d3 * d4 < 0) {
    return true;
  }

  if (d1 == 0 && this->OnSegment(this->p1, this->p2, segment.p1)) {
    return true;
  }
  if (d2 == 0 && this->OnSegment(this->p1, segment.p2, segment.p1)) {
    return true;
  }
  if (d3 == 0 && this->OnSegment(this->p2, this->p1, segment.p2)) {
    return true;
  }
  if (d4 == 0 && this->OnSegment(this->p2, segment.p1, segment.p2)) {
    return true;
  }

  return false;
}

Segment* Segment::Clone() const {
  auto* new_segment = new Segment({p1.x, p1.y}, {p2.x, p2.y});
  return new_segment;
}

string Segment::ToString() const {
  stringstream ss;
  ss << "Segment(" << p1.ToString() << ", " << p2.ToString() << ")";
  std::string str = ss.str();
  return str;
}

// private method

bool Segment::OnSegment(const Point& p, const Point& q, const Point& r) {
  return q.x <= std::max(p.x, r.x) && q.x >= std::min(p.x, r.x) &&
      q.y <= std::max(p.y, r.y) && q.y >= std::min(p.y, r.y);
}

}