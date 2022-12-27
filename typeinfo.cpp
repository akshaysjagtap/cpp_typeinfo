#include <iostream>
#include <typeinfo>
using namespace std;
 
int main() {
    cout << "Type of 1: " << typeid(1).name() << endl;
    cout << "Type of 2.0: " << typeid(2.0).name() << endl;
    cout << "Type of 'a': " << typeid('a').name() << endl;
    cout << "Type of \"a\": " << typeid("a").name() << endl;
    int *intptr = nullptr;
    void *ptr = nullptr;
    const void *p = nullptr;
    const void *const cp = nullptr;
    cout << "Type of void *ptr: " << typeid(ptr).name() << endl;
    cout << "Type of const void *p: " << typeid(p).name() << endl;
    cout << "Type of const void *const cp: " << typeid(cp).name() << endl;
    cout << "Type of int *intptr: " << typeid(intptr).name() << endl;
    string str = "";
    class A
    {
	
    };
    cout << "Type of class A: " << typeid(A).name() << endl;
}
