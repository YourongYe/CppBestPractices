#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a=0;
    cin>>a;
    int sum=0;
    while (a>=1){
        sum+=a%10;
        a/=10;
    }
    cout<<sum;

}
