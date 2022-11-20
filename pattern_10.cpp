#include <iostream>
using namespace std;
// int main()
// {
//     int input, row = 1;
//     cin >> input;
//     while (row <=input)
//     {
//         int col = 1;
//         while (col<=input)
//         {
//             char ch = 'A' + row -1;
//             cout << ch;
//             col++;
//         }
//         cout << endl;
//         row++;
        
//     }
    
// }


// Homework ABC (Done)

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <=n)
    {
        int col = 1;
        while (col <=n)
        {
            char ch  = 'A' + col-1;
            cout << ch;
            col++;
        }
        cout<< endl;
        row++;
        
    }
    
}
