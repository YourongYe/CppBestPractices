#include <iostream>
#include <vector>
#include <set>

int main()
{
    std::set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(-2);
    s.insert(10);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    
    for(std::set<int>::iterator it=s.begin(); it!=s.end(); ++it){
        std::cout<<*it<<std::endl;
    }
}
