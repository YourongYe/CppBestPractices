# Why “using namespace std” is considered bad practice

## 1. Ambiguity:to which library does cout point to?
就像python里面的： from pandas import *   
你不知道你到底import了多少变量和func，也不知道他们是什么名字。如果你自己在文件里也命名了一个变量和library里的一个变量名相同，就会会容易错掉。  
如果complier能detect到变量名冲突，则有可能会报错；如果不能detect，那你运行的时候也不知道它究竟用的是哪个变量。所以最好的办法是要用什么，就import
什么，这样你就知道你自己到底import了什么。
Namespaces were introduced into C++ to resolve identifier name conflicts.  

## 2. Unecessity: how many identifiers are you using at the end?
如果我们直接用了 using namespace std; 而我们最后只会用到cout， string， cin这些func，那么其他没必要的imported identifier会浪费时间空间  
When we import a namespace we are essentially pulling all type definitions into the current scope. The std namespace is huge. It has hundreds of predefined identifiers

# Solution
1. explicitly specify to which namespace our identifier belongs to using the scope operator (::)
```cpp
#include <foo> 
#include <iostream> 
  
// Use cout of std library 
std::cout << "Something to display"; 
  
// Use cout of foo library 
foo::cout < "Something to display"; 
```

2. Consider using typedefs
```cpp
#include <foo> 
#include <iostream> 
  
typedef std::cout cout_std; //类似python里的from pandas import DataFrame as df
typedef foo::cout cout_foo; 
  
cout_std << "Something to write"; 
cout_foo << "Something to write"; 
```

3. Instead of importing entire namespaces, import a truncated namespace
```cpp
using namespace std::chrono; //import std里的一部分，某个模块
  
auto start = high_performance_clock::now(); 
```

4.  Consider importing a single identifier
```cpp
using std::cout;
using std::endl;
```
5. Consider importing it in a local scope
```cpp
#include <isotream> 
  
// Avoid this 
using namespace std; 
  
void foo() 
{ 
    // Inside function 
    // Use the import statement inside limited scope 
    using namespace std; 
  
    // Proceed with function 
} 
```
