#pragma once
#include <iostream>
#include <initializer_list>
#include "parallelogram.h"

class Rhombus : public Parallelogram {
public:
  Rhombus(double a, double A, double B,std::string="Ромб");
  bool is_compliant() override;
};