#include <iostream>
#include "funcs.h"

int main (){

  std::cout << box(7,4) << '\n';
  std::cout << checker(11,6) << '\n';
  std::cout << cross(7) << '\n';
  std::cout << lower(6) << '\n';
  std::cout << upper(10) << '\n';
  std::cout << trapezoid(12,5) << '\n';
  std::cout << checkerboard(16,11) << '\n';

  return 0;
}
