#include <iostream>
using namespace std;

int main()
{
    int  f=0,s=1,n,i=1,series;

    cout<<"\n\nenter the no. : ";
    cin>>n;

    cout<<"\n\nSeries  is : ";

    cout<<"\n"<<s;
    


    while (i<n)
    {
        series=f+s;
        f=s;
        s=series;
        cout<<"\n"<<series;
        i++;

    }
    
 return 0;
}