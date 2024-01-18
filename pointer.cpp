#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    
    *ptr = 7;

    cout << "Value of a: " << a << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    cout << "SizeOf value: " << sizeof(*ptr) << "SizeOf int value: " << sizeof(&a) << endl;

    return 0;
}