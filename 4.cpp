Function写乘法表
#include <iostream>
#include <string>

void multiplicationTable(int num){
    for (int b=1; b<=num; b=b+1){
        for (int a=1; a<=b; a=a+1){
            std::cout<< a*b << ",";
            }
        std::cout<<std::endl;
        }
}

void multiTable(int num){
    int b=1;
    while (b<=num){
        int a=1;
        while (a<=b){
            std::cout<<a*b<<" ";
            a=a+1;
            }
        b=b+1;
        std::cout<<std::endl;
        }
    }


int main()
{
    multiplicationTable(6);
    multiTable(6);
}
