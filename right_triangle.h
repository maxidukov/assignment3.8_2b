#pragma once
#include <iostream>
#include <initializer_list>
#include "triangle.h"

class Right_Triangle : public Triangle {
public:
  Right_Triangle(double a, double b, double c, double A, double B,  std::string="Прямоугольный треугольник");
  bool is_compliant() override;
};