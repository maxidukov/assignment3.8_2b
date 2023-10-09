#include <iostream>
#include <initializer_list>
#include "equilateral.h"

Equilateral::Equilateral(double a, std::string name) : Isosceles(a, a, 60, 60, name) {
    if(!is_compliant_sides()){
      throw BadParams("стороны не равны");
    }
    if(!is_compliant_angles()){
      throw BadParams("углы не равны 60 градусам");
    }
    //set_name("Равносторонний треугольник");
}
bool Equilateral::is_compliant_sides() { //override
    return Isosceles::is_compliant_sides() &&
      Isosceles::is_compliant_angles() &&
      get_params()[0] == get_params()[1];
}
bool Equilateral::is_compliant_angles() { //override
    return Isosceles::is_compliant_sides() &&
      Isosceles::is_compliant_angles() &&
      get_params()[3] == 60;
}
