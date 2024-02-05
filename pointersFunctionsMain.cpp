#include "bits/stdc++.h"
using namespace std;

// I MUST PASS ARGUEMENT AS AN ADDRESS OF VARIABLE.

int ptrValues(int *ptr)
{
    *ptr += 1;
    return *ptr;
}

int main()
{
    // NOTE : ITS PASS BY REFERANCE NOT PASS BY VALUE ?
    // IT MEANS THAT ANY CHANGE TO THE VARIABLE X LIKE PASSING IT TO MY FUNCTION THAT HAS (X+=1) SO THE VALUE WILL BE 2

    int X=1;
    cout<<"\nX before passing it to my function : "<<X<<endl; // 1
    cout<<"\nptrValues(&X) when X=1 : "<<ptrValues(&X)<<endl; // 1+=1 == 2
    cout<<"\nX after passing it to my function : "<<X<<endl; // 2
    cout<<"\nptrValues(&X) after the value of X has been 2 because of X+=1 in the function : "<<ptrValues(&X)<<endl; // 2+=1 == 3
    cout<<"\nX after passing it to my function for the second time : "<<X<<endl; // 3
    X++; // 3++ = 4
    cout<<"\nX after X++ operation : "<<X<<endl;
    cout<<"\nptrValues(&X) after X++ and X+=1 in my function : "<<ptrValues(&X)<<endl; // 4+=1 == 5
    cout<<"\nX after the X++ and passing it to my function for the third time : "<<X<<endl; // 5

    cout<<"\n--------------------\n";

    // I CAN ALSO PASS POINTER TO MY FUNCTION :

    int Y = 9;
    int *ptr;
    ptr = &Y;
    cout<<"\nY before passing it to my Function : "<<Y<<endl;
    cout<<"\nptrValues when I passed (ptr) which has the address of Y : "<<ptrValues(ptr)<<endl;
    // it must be (ptr) because I'm passing ADDRESS , I can't write (&ptr)
    cout<<"\n--------------------\n";

    return 0;
}
