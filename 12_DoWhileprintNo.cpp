#include<iostream>
using namespace std;

int main()
{

    int n,i=2,j=2, prime = 0;

    cout<<"Enter the no. : ";
    cin>>n;

    do
    {
        j = 2;
        prime = 0;
        while (j <= (i/2))
        {
            if (i%j==0)
            {
                prime=1;
                
            }

            j++;

        }

        if (prime == 0)
        {
            cout<<i<<"\n";
        }

        i++;
       
    }while (i<=n);
    
}