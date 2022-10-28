#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << a << endl;
            }
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            if (b > d)
            {

                cout << b << endl;
            }
        }
        if (c > a)
        {
            if (c > b)
            {
                if (c > d)
                {
                    cout << c << endl;
                }
            }
        }
    }
    if (d > a)
    {
        if (d > b)
        {
            if (d > c)
            {
                {
                    cout << d << endl;
                }
            }
        }
    }
}
// int main()
// {
//     int number;
//     int num = high(number);
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     cout << high(num);
// }