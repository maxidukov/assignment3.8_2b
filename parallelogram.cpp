#include <iostream>
#include <initializer_list>
#include "parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B, std::string name)
      : Quadrangle(a, b, a, b, A, B, A, B,name) {
    if(!is_compliant_sides()){
      throw BadParams("нарушено равенство несмежных сторон");
    }
    if(!is_compliant_angles()){
      throw BadParams("нарушено равенство несмежных углов");
    }
   //set_name("Параллелограмм");
}
bool Parallelogram::is_compliant_sides() {
    return Quadrangle::is_compliant() &&
      get_params()[0] == get_params()[2] &&
      get_params()[1] == get_params()[3];
}
bool Parallelogram::is_compliant_angles() {
    return Quadrangle::is_compliant() &&
      get_params()[4] == get_params()[6] &&
      get_params()[5] == get_params()[7];
}
