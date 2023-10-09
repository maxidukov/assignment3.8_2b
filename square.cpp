#include <iostream>
#include <initializer_list>
#include "square.h"

Square::Square(double a,std::string name) : Rectangle(a, a,name) { 
  if(!is_compliant()){
      throw BadParams("нарушено равенство всех сторон");
    }
  set_name("Квадрат"); 
}
bool Square::is_compliant() { //override
    return Rectangle::is_compliant() &&
      get_params()[0] == get_params()[1];
}
