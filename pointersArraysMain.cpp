#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a[4] = {10,20,30,40};
    cout<<"a : "<<a<<endl; // The address of the first element in the array. (it equals a+0 )
    cout<<"a+1 : "<<a+1<<endl; // The address of the second element in the array.
    cout<<"a+2 : "<<a+2<<endl; // The address of the third element in the array.
    cout<<"a+3 : "<<a+3<<endl; // The address of the fourth element in the array.
    cout<<"--------------------\n";
    cout<<"*a : "<<*a<<endl; // The value of the first element in the array. ( it equals *(a+0) )
    cout<<"*a+1 : "<<*a+1<<endl; // The value of the first element in the array + 1.
    cout<<"*a+2 : "<<*a+2<<endl; // The value of the first element in the array + 2.
    cout<<"*a+3 : "<<*a+3<<endl; // The value of the first element in the array + 3.
    cout<<"*(a+1) : "<<*(a+1)<<endl; // The value of the second element in the array.
    cout<<"*(a+2) : "<<*(a+2)<<endl; // The value of the third element in the array.
    cout<<"*(a+3) : "<<*(a+3)<<endl; // The value of the fourth element in the array.
    cout<<"--------------------\n";
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    cout<<"for loop arr[i] : ";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nfor loop *(arr+i) : ";
    for(int i=0;i<10;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<"\nfor loop with ptr : ";
    int *ptr;
    ptr = arr; // ptr now has the address of the first element
    for(int i=0;i<10;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<"\nfor loop with ( & : ) : ";
    for(int &num : arr)
    {
        cout<<num<<" ";
    }
    cout<<"\n--------------------\n";

    return 0;
}
