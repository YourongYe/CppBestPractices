#include <iostream>
#include <string>

using namespace std;

int main()
{   
    int a,b;
    cout << "input a = ";
    cin >> a;
    cout << "input b = ";
    cin >> b;
    for (int i=a; i>=1; i--){
        if (a%i==0 && b%i==0){
            cout << i;
            break;
        }
    }
}
