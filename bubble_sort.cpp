/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> & series){
    int n = series.size();
    for(bool sorted=false; sorted=!sorted; n--){
        for(int i=0; i<n; i++){
            if(series[i-1]>series[i]){
                swap(series[i-1],series[i]);
                sorted = false;
            }
        }
    }
};

int main()
{
    vector<int> series;
    int a;
    while(true){
        cin>>a;
        if(a == 100){
            break;
        }
        series.push_back(a);
        
    }
    sort(series);
    for(int i=0; i<series.size(); i++){
        cout<<series[i]<<endl;
    }

}
