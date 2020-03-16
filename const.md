# Example
```cpp
int main() {
    int a = 8;
    int b = 10;
    const int *p1 = &a; // 指针所指的值是const，不能通过指针改变，但可以通过其他途径改变
    int* const p2 = &b; // 指针本身所存的地址不能改变，类似reference，只能指向一个object
    a += 1;
    cout << *p1 << endl; // 9
    // *p1 += 1; // error: assignment of read-only location ‘* p1’
    p1 = new int(4); // *p1 = 9
    *p2 += 1; 
    cout << b << endl; // 11
    // p2 = new int(88); //error: assignment of read-only variable ‘p2’
}
```

C++ const 关键字小结
https://www.runoob.com/w3cnote/cpp-const-keyword.html

# Const & parameter vs pure reference parameter
***Why we use a const when passing a reference to a func?***   
- The difference is more prominent when you are passing a big struct/class.   
- The important difference is that when passing by const reference, no new object is created.   
- When you use use 'normal' parameter, you pass the parameter by value and hence creating a copy of the parameter you pass. if you are using const reference, you pass it by reference and the original data is not copied.   
- In both cases, the original data cannot be modified from inside the function.  


# Const Casting
You can use a const_cast in order to temporarily strip away the const-ness of the object.

```cpp
const char *x = "abc";
func( const_cast<char *>(x) );
```
