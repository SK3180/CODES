#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Three Number" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "A is Greatest" << endl;
        }
    }
    if (b > a)
    {
        {
            if (b > c)
                cout << "B is Greatest" << endl;
            else
            {
                cout << "C is Greatest" << endl;
            }
        }
    }
    if (a > 0)
    {
        cout << "Number is Positive" << endl;
    }
    if (a < 0)
    {
        cout << "Negativeee" << endl;
    }
    else if (a == 0)
    {
        cout << "ZERO" << endl;
    }
    cout << a << endl
         << b << endl
         << c << endl;

    // home Work

    char n;
    cin >> n;
    if (n == 'a')
    {
        cout << "lowercase";
    }
    else if (n == 'A')
    {
        cout << "Upercase";
    }
    else
    {
        cout << "Numeric" << endl;
    }

    // While LOop
    int num;
    cin >> num;
    int i;
    i = 1;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }

    //  Sum Of Numbers

    int s;
    int sum = 0;
    cin >> s;
    while (i <= s)
    {
        sum = sum + i;

        i++;
    }
    cout << sum << endl;

    // Home Work ( sum of n even Numbers)

    int f;
    int ans = 0;
    int j = 2;
    cin >> f;
    while (j <= f)
    {
        ans = ans + j;
        j = j + 2;
    }
    cout << ans << endl;

    // Home Work ( Ferhanite to Celcious Table) *(IN PROGRESS!!!)*
    cout << "Home Work  Fer to Celcious" << endl;
    int input;
    float fer;
    double answer;
    cin >> input;
    int k = 1;
    float dino = 5 / 9;
    fer = (input - 32);
    answer = fer * dino;
    // while (k <= input)
    // {
    //     fer = fer + k;
    //     k++;
    // }
    cout << answer << endl;

    // prime and non prime using while loop !!
    cout << "Prime And not prime program" << endl;

    int ipt;
    cin >> ipt;
    int l = 2;
    while (l < ipt)
    {
        if (ipt % l == 0)
        {
            cout << "NOT PRIME for " << l << endl;
        }
        else
        {
            cout << "PRIME for " << l << endl;
        }
        l = l + 1;
    }
    // printing PAtterns !!!
    cout << "patterns" << endl;

    int user;
    cin >> user;

    int m = 1;
    while (m <= user)
    {
        int n = 1;
        while (n <= user)
        {
            cout << "*";
            n++;
        }
        cout << endl;
        m++;
    }
}
