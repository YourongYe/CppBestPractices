# Definition
The simple idea is to pass data type as a parameter so that **we don’t need to write the same code for different data types**.   
For example, a software company may need sort() for different data types.   
Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter.

# Generic Programming
The advantages of Generic Programming are

Code Reusability  
Avoid Function Overloading  
Once written it can be used for multiple times and cases.  

Generics can be implemented in C++ using Templates.

# Syntax
```cpp
template<typename T>
T max(T x, T y){
    //code
}
```

# Example
```cpp
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<typename T>
T max(T x, T y){
    return (x>y)? x:y;
}

int main() {
    cout << max<int>(2,8) << endl;
    cout << max<char>('e','d') << endl;
    cout << max<string>("sdf", "wer") << endl;
}
```
# Result
```cpp
8                                                                                                                       
e                                                                                                                       
wer   
```
# Bubblesort example
```cpp
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::swap;

template<typename T>
T max(T x, T y){
    return (x>y)? x:y;
}

template<typename T>
void bubbleSort(T a[], int length){
    for(int i=length; i>0; i--){
        for(int j=1; j<i; j++){
            if(a[j-1] > a[j]){
                swap(a[j-1], a[j]);
            }
        }
    }
}

int main() {
    int a1[10] = {3,2,1,10,5,9,7,8,6,4};
    bubbleSort<int>(a1, 10);
    int length = sizeof(a1)/sizeof(*a1);
    for(int i=0; i<length; i++){
        cout << a1[i] << " ";
    }
    cout << endl << sizeof(a1) << endl;
    
    char a2[5] = {'e','t','a','c','b'};
    bubbleSort<char>(a2, 5);
    for(int i=0; i<5; i++){
        cout << a2[i] << " ";
    }
}
```

# Result
```cpp
1 2 3 4 5 6 7 8 9 10                                                                                                    
40                                                                                                                      
a b c e t 
```
