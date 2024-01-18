#include <iostream>
using namespace std;

struct Student
{
 int rollno;
 string name;
 string dob;
};

int main()
{
    int n;
    cout<<"Enter the number of students whose data has to be entered: "<<endl;
    cin>>n;

    Student a[n];
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the roll no: ";
        cin>>a[i].rollno;

        cout<<"Enter the name: ";
        cin>>a[i].name;

        cout<<"Enter the dob: ";
        cin>>a[i].dob;
    }

    for(int i = 1;i<=n;i++)
    {
        cout<<a[i].name<<endl;
        cout<<a[i].rollno<<endl;
        cout<<a[i].dob<<endl;
    }

    return 0;
}