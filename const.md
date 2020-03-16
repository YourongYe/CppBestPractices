# Example
```cpp
int main() {
    int a = 8;
    int b = 10;
    const int *p1 = &a;
    int* const p2 = &b;
    a += 1;
    cout << *p1 << endl; // 9
    // *p1 += 1; // error: assignment of read-only location ‘* p1’
    p1 = new int(4); // *p1 = 9
    *p2 += 1; 
    cout << b << endl; // 11
    // p2 = new int(88); //error: assignment of read-only variable ‘p2’
}
```
