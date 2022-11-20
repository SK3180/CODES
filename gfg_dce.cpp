#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter a Number = ";
    cin >> a;
    cout << "Enter Second Number = ";
    cin >> b;
    if(a>b)
    {
        cout << "A is greater then B";
    }
    else
    if (b>a)    
    {
        cout << "B is Greater then A";
    }
    else
    if (a==0)
    {
        cout << "Enter a Valid Input!!! ";
    }

    

}