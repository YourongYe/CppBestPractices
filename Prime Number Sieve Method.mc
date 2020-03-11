```cpp
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


void crossOf(int prime, int flags[], int max){
    for(int i=prime*prime; i<=max; i+=prime){
        flags[i] = 1;
    }
}

int findNextPrime(int prime, int flags[], int max){
    int next = prime + 1;
    int end = sqrt(max);
    while(flags[next]==1 && next<=end){
        next++;
    }
    return next;
}

vector<int> sievePrime(int max){
    int flags[max+1] = {0}; //[0,0,0,0...]
    int prime = 2;
    while(prime<=sqrt(max)){
        crossOf(prime, flags, max);
        prime = findNextPrime(prime, flags, max);
    }
    vector<int> primes;
    for(int i=2; i<=max; i++){
        if(flags[i]==0){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    vector<int> primes;
    primes = sievePrime(100);
    for(int i=0; i<primes.size(); i++){
        cout << primes[i] << " ";
    }
}
```

# Result
```cpp
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97     
```
