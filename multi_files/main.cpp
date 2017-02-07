#include <iostream>

#include "addroutines.h"



int main(){

  int c;
  c = add2(5,10);
  std::cout<<c<<std::endl;
  c = add3(5,10,100);
  std::cout<<c<<std::endl;
  
  return 0;
}

