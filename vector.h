#ifndef CONTEST5_GEOMETRY_VECTOR_H_
#define CONTEST5_GEOMETRY_VECTOR_H_

#include <cstdint>

namespace geometry {

class Vector {
 public:
  Vector();
  Vector(int64_t, int64_t);

  int64_t x;
  int64_t y;

  Vector operator+() const;
  Vector operator-();

  Vector operator+(Vector&) const;
  Vector operator-(Vector&) const;
  Vector operator*(int) const;
  Vector operator/(int) const;

  Vector& operator+=(Vector&);
  Vector& operator-=(Vector&);
  Vector& operator*=(int);
  Vector& operator/=(int);

  bool operator==(Vector&);
  bool operator!=(Vector&);

  int64_t DotProduct(Vector&) const;
  int64_t CrossProduct(Vector&) const;
};

}

#endif
