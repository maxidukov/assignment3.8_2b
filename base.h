#pragma once
#include <iostream>
#include <initializer_list>
#include "badparams.h"

class Base {
  int sidenum;
  std::string name;
  double *params;

public:
  Base(std::string, std::initializer_list<double>);
  Base();
  double* get_params();
  int get_sidenum();
  std::string get_name();
  void set_sidenum(int);
  void set_name(std::string);
  void print_info();
  double get_sum_angles();
  double get_sum_angles_req();
  bool is_sum_angles_ok();
  virtual bool is_compliant();
  Base(const Base &);
  Base &operator= (const Base &);
  ~Base();
};