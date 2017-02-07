#include <iostream>

int add2(int , int );

int main()
{
  int c;
  std::cout << "HELLO WORLD\n";
  

  c=add2(5,10);
  std::cout << c << std::endl;


  return 0;

}

int add2(int a, int b){
  return a+b;
}
