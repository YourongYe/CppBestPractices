// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{   
    int a;
    cin>>a;
    cout<<a<<endl;
    while (a>1){
        if (a%10!=0){
            cout<<"no";
            break;
        }
        
        else {
            if (a/10!=1){
                a=a/10;
            }
            else {
                cout<<"yes";
                break;
            }
        }
    }
}
