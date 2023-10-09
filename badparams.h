#pragma once
#include <iostream>

class BadParams : public std::domain_error{
  std::string cause;
  std::string fig;
  public:
    BadParams(std::string cause, std::string fig = "");
    //const char* what() const noexcept override ;
    std::string what_exact();
};