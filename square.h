#pragma once
#include <iostream>
#include <initializer_list>
#include "rectangle.h"

class Square : public Rectangle {
public:
  Square(double a,std::string="Квадрат");
  bool is_compliant() override;
};