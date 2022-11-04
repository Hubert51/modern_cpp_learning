#include <iostream>
#include <string>
#include "default_constructor.h"


int main() {
  // with C++14

  // digit seperator
  int a = 100'0000;
  std::cout << "Print number with ': " << a << std::endl;

  // Uniform initialization & Non-static member initialization
  Demo obj1{123, true, 1, 1.1};
  Demo obj2;
  std::cout << obj1.m_var_1 << std::endl;
  std::cout << obj2.m_var_1 << std::endl;

  return 0;

}
