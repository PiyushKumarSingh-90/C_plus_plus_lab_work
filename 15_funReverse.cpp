#include <iostream>
using namespace std;

string reverse(string c)
{
   string rev;
   int b = c.length() - 1;

   for (int i = c.length() - 1; i >= 0; i--)
   {
      rev = rev + c[i];
   }

   cout << rev;

   return rev;
}

int main()
{
   string c;
   

   cout << "Enter character : ";
   cin >> c;

   reverse(c);
}