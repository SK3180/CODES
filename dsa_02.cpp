#include <iostream>
using namespace std;

int main()

{
    int a, b, c;

    cout << "Hello Guys" << '\n';
    cin >> a;
    cout << a << '\n';
    cin >> b;
    cout << b << '\n';
    c = a + b;
    cout << c << '\n';
    cout << "Hello" << '\n';
    bool bl = true;
    cout << bl << '\n';
    int size = sizeof(a);
    cout << size << '\n';

    if (a > b)
    {
        if (a > c)
        {
            cout << "A is Greatest" << endl;
        }
        else
        {
            if (b > a)
            {
                if (b > c)
                {
                    cout << "B is Greatest" << endl;
                }
            }
            else
            {
                cout << "C is Greatest" << endl;
            }
        }
    }
}