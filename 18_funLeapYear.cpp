#include <iostream>
using namespace std;

void leap(int y)
{
    if ((y % 4 || y % 100) && (y % 400))
    {
        cout << "leap year";
    }
    else
    {
        cout << " not leap year";
    }
}

int main()
{
    int y;

    cout << "Enter the year u want to check :";
    cin >> y;

    leap(y);
    return 0;
}