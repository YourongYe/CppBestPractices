# Example
```cpp
try{
    int b = 0;
    int a = 10;
    if(b==0){
        throw "zero division";
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
