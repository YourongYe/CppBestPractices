// Example program
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout<<"how many students?"<<endl;
    int num = 0;
    cin>>num;
    
    //VECTOR
    std::vector<int> scores;
    
    cout<<"what are their scores respectively?"<<endl;
    for(int i=0; i<num; ++i){
        cout<<"student ["<<i<<"] score:";
        int t = 0;
        cin>>t;
        cout<<"student ["<<i<<"] score is :["<<t<<"]"<<endl<<endl;
        
        scores.push_back(t);
    }
    
    cout<<"Printing student scores:"<<endl;
    for(int i=0; i<scores.size(); ++i){
        cout<<scores[i]<<endl;
    }
}
