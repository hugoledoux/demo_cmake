
#include <iostream>

#include "Helper.h"

Helper::Helper(double value) {
  std::cout << "Value passed: " << value << std::endl;
  _value = value;
}


double Helper::get_value() {
  return _value;
}


