#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout<<"Input a number: ";
    int n;
    cin>>n;
    int count=0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            count++;
        }
    }
    if (count==1){
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}
