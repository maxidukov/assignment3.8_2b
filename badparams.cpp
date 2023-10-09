#pragma once
#include <iostream>
#include "badparams.h"

BadParams::BadParams (std::string cause, std::string fig) : std::domain_error("Ошибка создания фигуры"), fig(fig), cause(cause)
      {
      //this->cause = cause;
      //this->fig = fig
}
/*const char* BadParams::what() const noexcept { //override
      return "Ошибка создания фигуры. Причина: ";
}*/
std::string BadParams::what_exact(){
  std::string start = ""; // NEEDE TO START CONCAT, OR ELSE what() + "\"" WON'T CONCAT
  std::string figform = fig != "" ? " \"" + fig + "\"" : "";
  return start + what() + figform + ". Причина: " + cause + "\n";
}
