#include <iostream>
using namespace std;

int main()
{
   int n,i=0,max;
   

   cout<<"\n\nEnter the length of array : ";
   cin>>n;
   

   int arr[n];
   for (int i = 0; i <n; i++)
   {
      cout<<"enter "<<i+1<<" no. : ";
      cin>>arr[i];
   }

   max=arr[0];
   

   while(i < n)
   {
      if (arr[i]>max)
      {
         max=arr[i];
         
      }
      i++;
   }
   cout<<"\nLargest among "<<n<<" is : "<<max;

  return 0;
}