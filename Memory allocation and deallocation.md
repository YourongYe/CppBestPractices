# Memory allcation (common method & exception handling needed)
One is by handling exceptions. Using this method, an exception of type bad_alloc is thrown when the allocation fails.
```cpp
int * foo;
foo = new int [5]; // if allocation fails, an exception is thrown
```

# Memory allocation (without handling exception)
The other method is known as **nothrow**, and what happens when it is used is that when a memory allocation fails,   
instead of throwing a **bad_alloc exception** or terminating the program, the pointer returned by new is a null pointer,   
and the program continues its execution normally.
```cpp
foo = new (nothrow) int [5];
```
In this case, if the allocation of this block of memory fails, the failure can be detected by checking if foo is a null pointer:
```cpp
int * foo;
foo = new (nothrow) int [5];
if (foo == nullptr) {
  // error assigning memory. Take measures.
}
```
This nothrow method is likely to produce less efficient code than exceptions, since it implies explicitly checking the pointer value returned after each and every allocation.


# Memory deallocation 
The first statement releases the memory of a single element allocated using new,   
and the second one releases the memory allocated for arrays of elements using new and a size in brackets ([]).
```cpp
delete pointer;
delete[] pointer;
```

# Difference Between Delete and Free

1. Delete is an operator while Free is a function.  
2. Delete frees the allocated memory and also calls the destructor of the class in c++ while free() does not calls any destructor and only free the allocated memory .  
3. Free() uses C run time heap whereas Delete may be overloaded on class basis to use private heap.  
