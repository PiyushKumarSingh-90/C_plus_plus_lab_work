#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,count=0;

  
    while (n!=0)
    {
        cout<<"Enter the no. : ";
        cin>>n;
        sum += n;
        count += 1;
    }


    cout<<"\n\nsum : "<<sum;
    cout<<"\ntotal : "<<(count-1);
    cout<<"\naverage: "<<sum/(count-1);

}