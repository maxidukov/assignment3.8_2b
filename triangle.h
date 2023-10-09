#pragma once
#include <iostream>
#include "base.h"

class Triangle : public Base {
public:
  Triangle(double a, double b, double c, double A, double B, double C, std::string="Треугольник");
  //bool is_compliant() override;
};