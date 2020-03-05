# Memory allcation (common method)
```cpp
int * foo;
foo = new int [5]; // if allocation fails, an exception is thrown
```

# Memory allocation (handling exception)
The other method is known as **nothrow**, and what happens when it is used is that when a memory allocation fails,   
instead of throwing a **bad_alloc exception** or terminating the program, the pointer returned by new is a null pointer,   
and the program continues its execution normally.
```cpp
foo = new (nothrow) int [5];
```
