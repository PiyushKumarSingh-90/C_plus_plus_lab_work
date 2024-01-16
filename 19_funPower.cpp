#include <iostream>
using namespace std;

void power(int n, int p)
{

    int cal=1;
    for (int i = 1; i <= p; i++)
    {
        cal *= n;
    }
    cout << "\n\n"<< n << " to the power " << p << " is : " << cal;
}

int main()
{
    int n, p;

    cout << "\n\nEnter the no : ";
    cin >> n;

    cout << "Enter the power : ";
    cin >> p;

    power(n, p);

    return 0;
}



