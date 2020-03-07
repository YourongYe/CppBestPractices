# Definition
The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.   
For example, a software company may need sort() for different data types.   
Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter.

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
