/*
   Design a program to simulate a simple online shop. Create a class
   Product with attributes like name, price, and quantity in stock. Implement
   methods for adding products to the shopping cart, calculating the total
   cost, and displaying the contents of the cart.
*/

#include <iostream>
using namespace std;

class Product
{
 private:
   string product_name;
   int price;
   int quantity;
   int cal;
   

   public:
   
   void addProduct()
   {
      cout<<"\n\nName of product u want to add  : ";
      cin>>product_name;

      cout<<"Price of product : ";
      cin>>price;

      cout<<"how much quantity u want : ";
      cin>>quantity;
       
   }

   void calculate()
   {
      cal=price*quantity;
   }

   void displayContent()
   {
      
      cout<<"\nTotal content is : "<<cal;
      cout<<"\n\n________________________________";
   }
};

int main()
{

   int n;

   cout<<"\n\nEnter the no. u want to add : ";
   cin>>n;

   for (int i = 1; i <=n; i++)
   {
      Product  p1;

      p1.addProduct();
      p1.calculate();
      p1.displayContent();
   }
   
   
   
}
