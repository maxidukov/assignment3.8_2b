#pragma once
#include <iostream>
#include <initializer_list>
#include "base.h"

class Quadrangle : public Base {
public:
  Quadrangle(double a, double b, double c, double d, double A, double B,
             double C, double D,std::string="Четырёхугольник");
  //bool is_compliant() override;
};