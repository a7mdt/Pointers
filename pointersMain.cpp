#include "bits/stdc++.h"
using namespace std;

int main()
{
    // 1) THE DATA TYPE OF MY POINTER THE SAME OF THE VARIABLE (int/int),(float/float), ....

    int *ptr; // Pointer
    int x = 5;
    ptr = &x; // ptr = The address of this x in the memory.
    // Printing address :
    cout<<"ptr : "<<ptr<<endl; // The address of x in the memory
    cout<<"&x : "<<&x<<endl; // The address of x in the memory
    cout<<"--------------------\n";
    // Printing value :
    cout<<"*ptr before changing : "<<*ptr<<endl; // The value of x
    cout<<"x before changing : "<<x<<endl; // The value of x
    cout<<"--------------------\n";
    // Note : " any change of the value of *ptr or x will change the other ".
    *ptr = 50;
    cout<<"*ptr after changing *ptr : "<<*ptr<<endl; // The new value of *ptr
    cout<<"x after changing *ptr : "<<x<<endl; // The new value of *ptr
    cout<<"--------------------\n";
    x = 500;
    cout<<"*ptr after changing x : "<<*ptr<<endl; // The new value of x
    cout<<"x after changing x : "<<x<<endl; // The new value of x
    cout<<"--------------------\n";
    cout<<"&*ptr : "<<&*ptr<<endl; // Address
    cout<<"*&*ptr : "<<*&*ptr<<endl; // Value
    cout<<"--------------------\n";
    x++;
    cout<<"ptr after x++ : "<<ptr<<endl; // The same address of x
    cout<<"*ptr after x++ : "<<*ptr<<endl; // The new value of x (10)
    cout<<"--------------------\n";

    // 2) THE DATA TYPE OF MY POINTER NOT THE SAME OF THE VARIABLE (int/float),(long long/double), ....

    void *ptr1;
    int y;
    double z=22.7;
    ptr1 = &y;
    ptr1 = &z;
    // When u need to print the value of this ptr1 (void) u must cast it first , How?
    double *ptrDbl = static_cast<double*>(ptr1); // u must store it in casted new pointer.
    cout<<"*ptrDbl (the value of ptr1 which) : "<<*ptrDbl<<endl;
    cout<<"--------------------\n";

    return 0;
}
