#include <iostream>
#include <initializer_list>
#include "right_triangle.h"

Right_Triangle::Right_Triangle(double a, double b, double c, double A, double B, std::string name)
      : Triangle(a, b, c, A, B, 90, name) {
    if(!is_compliant()){
      throw BadParams("угол C не равен 90 градусам");
    }
    //set_name("Прямоугольный треугольник");
}
bool Right_Triangle::is_compliant() { //override
    return Base::is_compliant() && get_params()[5] == 90;
}
