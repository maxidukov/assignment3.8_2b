#include <iostream>
#include <initializer_list>
#include "rhombus.h"

Rhombus::Rhombus(double a, double A, double B,std::string name) : Parallelogram(a, a, A, B,name) {
    if(!is_compliant()){
      throw BadParams("нарушено равенство всех сторон");
    }
   //set_name("Ромб");
}
bool Rhombus::is_compliant() { //override
    return Parallelogram::is_compliant_sides() &&
      Parallelogram::is_compliant_angles() &&
      get_params()[0] == get_params()[1];
}
