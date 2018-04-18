#include <iostream>
#include <map>
#include <string>
#include <utility>

int main()
{
    std::map<int,std::string> m;
    m.insert( std::pair<int,std::string>(9175,"yoyo1") );
    m.insert( std::pair<int,std::string>(1,"a") );
    m.insert( std::pair<int,std::string>(4,"d") );
    m.insert( std::pair<int,std::string>(3,"c") );
    m.insert( std::pair<int,std::string>(9174,"yoyo") );
    
    for(std::map<int,std::string>::iterator it=m.begin(); it!=m.end(); ++it){
        std::cout<< it->first <<" : "<< it->second<<std::endl;
    }
    
}
