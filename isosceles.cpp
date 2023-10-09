#include <iostream>
#include <initializer_list>
#include "isosceles.h"

Isosceles::Isosceles(double a, double b, double A, double B, std::string name)
      : Triangle(a, b, a, A, B, A, name) {
    if(!is_compliant_sides()){
      throw BadParams("стороны a и c не равны");
    }
    if(!is_compliant_angles()){
      throw BadParams("углы A и C не равны");
    }
    //set_name("Равнобедренный треугольник");
}
bool Isosceles::is_compliant_sides() { //virtual
    return Base::is_compliant() &&
      get_params()[0] == get_params()[2];
}
bool Isosceles::is_compliant_angles() { //virtual
    return Base::is_compliant() &&
      get_params()[3] == get_params()[5];
}
