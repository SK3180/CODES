#include <iostream>
using namespace std;
int main()
{
    // int n,i=1,sum =0;
    // cin >> n;
    // while(i<=n)
    // {
    //     // cout << i << endl;
    //     // i =i  +1;
    //     sum = sum +i ;
    //     i++;
       
    // }
    //  cout << sum << endl;


  //  HomeWork 01

  //   int n;
  //   cout << "ENTER AN NUMBER = ";
  //   cin >> n;
  //   int i = 2;
  //   int sum =0;
  //   while(i<=n)
  //   {
  //      sum = sum + i;
  //      i = i+2;
  //   }
  // cout << sum << endl;


  //Prime Or NOt

  int n;
  cin >> n;
  int i = 2;
  while (i<n)
  {
   if(n%i==0)
   {
    cout << "NOT PRIME for "<< i << endl;

   }
   else
   {
    cout << "PRIME for "<< i << endl;
   }
   i++;
  }
  

} 