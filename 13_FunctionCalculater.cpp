#include <iostream>
using namespace std;

int calculater(int a,int b)
{
    cout<<"\naddition of "<<a<<" & "<<b<<" is : "<<a+b;
    cout<<"\nsubtraction of "<<a<<" & "<<b<<" is : "<<a-b;
    cout<<"\nmultiplication of "<<a<<" & "<<b<<" is : "<<a*b;
    cout<<"\ndivision of "<<a<<" & "<<b<<" is : "<<a/b;
    return 0;
}

int main()
{
    int a,b;

    cout<<"\n\nEnter the first no. : ";
    cin>>a;

    cout<<"Enter the second no. : ";
    cin>>b;

    calculater(a,b);
    return 0;

}

