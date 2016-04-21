// Copyright 2016 Rumyantsev Alexander

#ifndef MODULES_RUMYANTSEV_ALEXANDER_VECTOR3D_INCLUDE_VECTOR3D_H_
#define MODULES_RUMYANTSEV_ALEXANDER_VECTOR3D_INCLUDE_VECTOR3D_H_

#include <exception>

class DivisionByZero : public std::exception {
 public:
  virtual char const* what() const;
};

class NullVectorNormalizing : public std::exception {
 public:
  virtual char const* what() const;
};

class Vector3D {
 public:
  Vector3D();
  Vector3D(const double x, const double y, const double z);
  Vector3D(const Vector3D& v);

  Vector3D& operator=(const Vector3D& v);

  double getX() const;
  double getY() const;
  double getZ() const;

  void setX(const double x);
  void setY(const double y);
  void setZ(const double z);

  Vector3D operator+(const Vector3D& v) const;
  Vector3D operator-(const Vector3D& v) const;
  Vector3D operator-() const;

  Vector3D operator*(const double k) const;
  friend Vector3D operator*(const double k, const Vector3D& v);
  Vector3D operator/(const double k) const;

  bool operator==(const Vector3D& v) const;
  bool operator!=(const Vector3D& v) const;

  double magnitude() const;
  void normalize();
  double dot(const Vector3D& v) const;
  Vector3D cross(const Vector3D& v) const;

 private:
  double x_;
  double y_;
  double z_;

  bool isNullVector() const;
};

#endif  // MODULES_RUMYANTSEV_ALEXANDER_VECTOR3D_INCLUDE_VECTOR3D_H_
