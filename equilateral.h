#pragma once
#include <iostream>
#include <initializer_list>
#include "isosceles.h"

class Equilateral : public Isosceles {
public:
  Equilateral(double a, std::string="Равносторонний треугольник");
  bool is_compliant_sides() override;
  bool is_compliant_angles() override;
};