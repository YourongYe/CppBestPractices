// Example program
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> v;
    std::vector<float> array;
    for (int i=1; i<=6; i++){
        v.push_back(i);
    }
    
    
    //////
    for (int i=0; i<v.size()/2; i++){
        int m=v[i];
        v[i]=v[v.size()-1-i];
        v[v.size()-1-i]=m;
    }
    
    for (int i=0; i<v.size(); i++){
        std::cout<< v[i]<<std::endl;
    }
    //int m=v[0];
    //v[0]=v[4];
    //v[4]=m;
}
