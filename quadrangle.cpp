#include <iostream>
#include <initializer_list>
#include "quadrangle.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B,
             double C, double D, std::string name)
      : Base(name,{a, b, c, d, A, B, C, D}) {
    /*if(!is_compliant()){
      throw BadParams("сумма углов не равна " + std::to_string(get_sum_angles_req()));
    }*/
    //set_name("Четырёхугольник");
}
/*bool Quadrangle::is_compliant() { //override
    return is_sum_angles_ok();
}*/
