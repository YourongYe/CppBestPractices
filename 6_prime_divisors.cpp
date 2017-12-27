// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout<<"Type a natural number: ";
    cin>>n;
    for (int i=2;i<=n;i++){ 
        if (n%i==0){      //find all the divisors except 1
            int count=0;
            for (int j=1;j<=i;j++){   //find all the prime numbers
                if (i%j==0){
                    count++;
                }
            }
            if(count==2){
                cout<<i<<endl;
            }
                
        }    
        
    }
}
