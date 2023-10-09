#include <iostream>
#include <initializer_list>
#include "triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C, std::string name)
      : Base(name,{a, b, c, A, B, C}) {
    /*if(!is_compliant()){
      throw BadParams("сумма углов не равна " + std::to_string(get_sum_angles_req()));
    }*/
    //set_name("Треугольник");
}
/*bool Triangle::is_compliant() { //override
    return is_sum_angles_ok();
}*/
