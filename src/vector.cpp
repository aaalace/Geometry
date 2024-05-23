#include "../vector.h"

namespace geometry {

// constructors

Vector::Vector() = default;

Vector::Vector(int64_t x, int64_t y) {
  this->x = x;
  this->y = y;
}

// unary operators

Vector Vector::operator+() const {
  return *this;
}

Vector Vector::operator-() {
  this->x = -this->x;
  this->y = -this->y;
  return *this;
}

// binary operators

Vector Vector::operator+(Vector& other) const {
  return {this->x + other.x, this->y + other.y};
}

Vector Vector::operator-(Vector& other) const {
  return {this->x - other.x, this->y - other.y};
}

Vector Vector::operator*(int lambda) const {
  return {this->x * lambda, this->y * lambda};
}

Vector Vector::operator/(int lambda) const {
  return {this->x / lambda, this->y / lambda};
}

// assignment binary operations

Vector& Vector::operator+=(Vector& other) {
  this->x += other.x;
  this->y += other.y;
  return *this;
}

Vector& Vector::operator-=(Vector& other) {
  this->x -= other.x;
  this->y -= other.y;
  return *this;
}

Vector& Vector::operator*=(int lambda) {
  this->x *= lambda;
  this->y += lambda;
  return *this;
}

Vector& Vector::operator/=(int lambda) {
  this->x /= lambda;
  this->y /= lambda;
  return *this;
}

// compare operations

bool Vector::operator==(Vector& other) {
  return this->x == other.x && this->y == other.y;
}

bool Vector::operator!=(Vector& other) {
  return this->x != other.x || this->y != other.y;
}

}

