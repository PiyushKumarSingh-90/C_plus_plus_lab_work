// 1)c++ program to read and print student information,for bTech admission

/* 2)given that employee class contains following mmebers,data  members,employee numer,
employee name,basic salary,DA(daily allowance),net saalary,and print data members the
employee designations are Principal,Hod,Professor,Lab assistant*/

#include <iostream>
using namespace std;

class Information
{
public:
    string name;
    int date;
    float marks_p;
    float marks_c;
    float marks_m;
    float total_marks;

    void setData()
    {
        cout << "\n\nEnter student name : ";
        cin >> name;

        cout << "Enter date of summition : ";
        cin >> date;

        cout << "\nEnter marks of PHYSICS : ";
        cin >> marks_p;

        cout << "\nEnter marks of CHEMISTRY : ";
        cin >> marks_c;

        cout << "\nEnter marks of MATHS : ";
        cin >> marks_m;
    }
};

class History : public Information
{

public:
    int getDetails()
    {
        total_marks = ((marks_p + marks_c + marks_m) / 3);

        return (total_marks);
    }
};

int main()
{
    History inf;

    inf.setData();
    inf.getDetails();

    cout << "total marks : " << inf.getDetails();
}
