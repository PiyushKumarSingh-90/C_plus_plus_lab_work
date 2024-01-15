#include <iostream>
using namespace std;

int main()
{
   int n, i = 2, a = 0;

   cout << "Enter the no. : ";
   cin >> n;

   while (i <= n)
   {
      if (n % i == 0)
      {
         a += 1;
      }
      i++;
   }

   if (a > 2)
   {
      cout << "not prime";
   }
   else
   {
      cout << "prime";
   }
}