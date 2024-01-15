#include <iostream>
using namespace std;

int main()
{
    string c,rev="";
    int i;

    cout<<"\n\nEnter the character : ";
    getline(cin,c);

    i= c.length()-1;

    while (i>=0)
    {
        rev=rev+c[i];
        i--;

    }
    cout<<rev;
    
}