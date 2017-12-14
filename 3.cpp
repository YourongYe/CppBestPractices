// Example program
#include <iostream>
#include <string>
#include <cmath>

double Pi(){
    return 3.1415926539793;   
}

double Area(double r){
    return r * r * Pi();
}

double Area(double width, double length){
    return width*length;
}

double Area(int a, int b, int c){
    double s = (a+b+c)/2.0;
    double area = std::sqrt(s*(s-a)*(s-b)*(s-c));
    return area;    
}

int add(int a, int b, int c){
    return a+b+c;
}

int add(int a, int b){
    return a+b; 
}

double add(double a, double b){
    return a+b; 
}

void sayHello(){
    std::cout<<"hello"<<std::endl;    
}

void printSomething(int a){
    std::cout<<"Printing "<<a<<std::endl;    
}



int main()
{   
    std::cout<<Area(4.0)<<std::endl;
    std::cout<<Area(4.0,5.4)<<std::endl;
    std::cout<<Area(3,4,5)<<std::endl;
    
    std::cout<<add(2,3,5)<<std::endl;
    std::cout<<add(1,5)<<std::endl;
    std::cout<<add(1.2,5.2)<<std::endl;
    
    sayHello();
    printSomething(3);

    bool sth = true;
    if(sth){
        std::cout<<"yeah its true"<<std::endl;    
    } else {
        std::cout<<"no its false"<<std::endl;    
    }

    return 0;
}



