#pragma once
#include <iostream>
#include <initializer_list>
#include "parallelogram.h"

class Rectangle : public Parallelogram {
public:
  Rectangle(double a, double b,std::string="Прямоугольник");
  bool is_compliant() override;
};