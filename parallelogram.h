#pragma once
#include <iostream>
#include <initializer_list>
#include "quadrangle.h"

class Parallelogram : public Quadrangle {
public:
  Parallelogram(double a, double b, double A, double B,std::string="Параллелограмм");
  bool is_compliant_sides();
  bool is_compliant_angles();
};