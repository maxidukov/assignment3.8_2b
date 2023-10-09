#include <iostream>
#include <initializer_list>
#include "base.h"

Base::Base(std::string name, std::initializer_list<double> arglist) {
    set_name(name);
    set_sidenum(arglist.size() / 2);
    int i{};
    params = new double[sidenum * 2];
    for (double const &val : arglist) {
      if (i == sidenum * 2) {
        std::cout << "Even number of arguments needed. Last argument ignored\n";
        break;
      } else {
        params[i++] = val;
      }
    }
    if(!is_compliant()){
      throw BadParams("сумма углов не равна " + std::to_string(static_cast<int>(get_sum_angles_req())), name);
    }
    print_info();
    std::cout<<"  создан\n";
    //set_name("Фигура");
  //print_info();
}
Base::Base(){
      params = nullptr;
      set_sidenum(0);
    if(sidenum){
      throw ;
    BadParams("число сторон не равно 0");
    }
  set_name("Фигура");
}
double* Base::get_params(){
     return params;
}
int Base::get_sidenum() { return sidenum; }
std::string Base::get_name() { return name; }
void Base::set_sidenum(int sidenum) { this->sidenum = sidenum; }
void Base::set_name(std::string name) { this->name = name; }
void Base::print_info() {
    std::cout << name << " "
              << " (";
    std::cout << "стороны ";
    for (int i{}; i<sidenum*2; ++i) {
      std::cout << params[i];
      if (i == sidenum-1) {
        std::cout << "; углы ";
      }else if(i==sidenum*2-1){
        std::cout<<")";
      }
      else std::cout<<", ";
    }
    //std::cout << std::endl;
}
double Base::get_sum_angles(){
    double sum_angles = 0;
    for(int i=sidenum;i<sidenum*2;i++){
      sum_angles += params[i];
    }
    return sum_angles;
}
double Base::get_sum_angles_req(){
    return 180*(sidenum-2);
}
bool Base::is_sum_angles_ok(){
    if(get_sidenum() < 3){
      return true;
    }
    //std::cout<<get_sum_angles()<<" vs "<<get_sum_angles_req()<<"\n";
    return get_sum_angles() == get_sum_angles_req();
}
bool Base::is_compliant(){ //virtual
    //return get_sidenum()==0;
    return is_sum_angles_ok();
}
Base::Base(const Base &bs_first) : sidenum(bs_first.sidenum), 
                               name(bs_first.name){ // deep copy constructor
    if(bs_first.params){
    params = new double[sidenum*2];
		for (int i=0;i<sidenum*2;i++) params[i]=bs_first.params[i];
}else params = nullptr;
}
Base& Base::operator= (const Base & bs_first) { // deep copy assignment overloading
        // self-assignment is a special case: don't need to do anything
        if (this == &bs_first) {
            return *this;
        } else {
            sidenum = bs_first.sidenum;
            name = bs_first.name;
            if(bs_first.params){
            params = new double[sidenum*2];
            for(int i = 0; i < sidenum*2; ++i) {  // copy bs_first's values
                params[i]=bs_first.params[i];     // into this array
            }
      }else params = nullptr;
            return *this;
        }
}
Base::~Base(){
  delete [] params;
}