// Example program
#include <iostream>
#include <string>


int main()
{

  //basic self-increment
  int a = 1;
  a = a + 1;
  std::cout<<a<<std::endl;

  a = a - 2;
  std::cout<<a<<std::endl;

  a = a * 3;
  std::cout<<a<<std::endl;

  int b = 3;
  b += 4;
  std::cout<<b<<std::endl;

  b++;
  std::cout<<b<<std::endl;

  //loop
  int c = 1;
  while(c < 11){
    std::cout<<c<<std::endl;
    c = c+1;
  }

  int d = 20;
  while (d>9) {
    std::cout << d << std::endl;
    d = d-1;
  }

  int e=2;
  while (e<=20) {
    std::cout << e <<std::endl;
    e = e+2;
  }

  for(int f=2; f<2; f=f+2){
    std::cout<<f<<std::endl;
  }

}



