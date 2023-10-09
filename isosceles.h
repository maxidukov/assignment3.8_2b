#pragma once
#include <iostream>
#include <initializer_list>
#include "triangle.h"

class Isosceles : public Triangle {
public:
  Isosceles(double a, double b, double A, double B, std::string="Равнобедренный треугольник");
  virtual bool is_compliant_sides();
  virtual bool is_compliant_angles();
};