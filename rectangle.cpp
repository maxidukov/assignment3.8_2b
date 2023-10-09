#include <iostream>
#include <initializer_list>
#include "rectangle.h"

Rectangle::Rectangle(double a, double b,std::string name) : Parallelogram(a, b, 90,90,name) {
    if(!is_compliant()){
      throw BadParams("углы не равны 90 градусам");
    }
    //set_name("Прямоугольник");
}
bool Rectangle::is_compliant() { //override
    return Parallelogram::is_compliant_sides() &&
      Parallelogram::is_compliant_angles() &&
      get_params()[4] == 90;
}
