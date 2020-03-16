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

Simple:
```cpp
#include <stdexcept>
int compare( int a, int b ) {
    if ( a < 0 || b < 0 ) {
        throw std::invalid_argument( "received negative value" );
    }
}
```
    
The Standard Library comes with a nice collection of built-in exception objects you can throw. ***Keep in mind that you should always throw by value and catch by reference:***
```cpp
try {
    compare( -1, 3 );
}
catch( const std::invalid_argument& e ) {
    // do stuff with exception... 
}
You can have multiple catch() statements after each try, so you can handle different exception types separately if you want.

You can also re-throw exceptions:

catch( const std::invalid_argument& e ) {
    // do something

    // let someone higher up the call stack handle it if they want
    throw;
}
```
And to catch exceptions regardless of type:
```cpp
catch( ... ) { };
```
