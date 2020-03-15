# Example
```cpp
try{
    int b = 0;
    int a = 10;
    if(b==0){
        throw "zero division"; // C++中throw的error相当于是自己定义的，而python里则是已经定义好的
    }
    cout << a/b << endl;
} catch(...) {
    cout << "catch error" << endl;
}
```

# Result
```cpp
catch error  
```
