

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <sstream>

//-- include that file that is in the same folder
#include "Helper.h"


Helper do_smth(double value);

int main(int argc, char* argv[])
{
  //-- read value from passed argument
  double user_value = std::stod(argv[1]);
  Helper h = do_smth(user_value);

  std::cout << "The value is: " << h.get_value() << std::endl;

  //-- to say that it terminated without errors
  return 0;
}


Helper do_smth(double value) {
  Helper myhelper(value);
  return myhelper;
}



