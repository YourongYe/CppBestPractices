// Example program
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> v;
    std::vector<float> array;
    for (int i=1; i<=5; i++){
        v.push_back(i);
    }
    
    for (int i=0; i<v.size(); i++){
        std::cout<< v[i]<<std::endl;
    }
}
