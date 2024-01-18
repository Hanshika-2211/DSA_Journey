#include <iostream>
using namespace std;

struct Student
{
 int rollno;
 string name;
 string dob;
 int marks;
 string result;

};

int main()
{
    int n;
    cout<<"Enter the number of students whose data has to be entered: "<<endl;
    cin>>n;

    Student a[n];
    for(int i=0;i<=n;i++)
    {
        cout<<"Enter the roll no: ";
        cin>>a[i].rollno;

        cout<<"Enter the name: ";
        cin>>a[i].name;

        cout<<"Enter the dob: ";
        cin>>a[i].dob;

        cout<<"Enter the marks: ";
        cin>>a[i].marks;

        if(a[i].marks<=100 && a[i].marks>0){
            a[i].result="Pass";
        }else if(a[i].marks<=35 || a[i].marks==0)
        {
            a[i].result="Fail";
            cout<<a[i].result;
        }

    }
    for(int i = 0;i<=n;i++)
    {
        cout<<a[i].name<<endl;
        cout<<a[i].rollno<<endl;
        cout<<a[i].dob<<endl;
        cout<<a[i].marks<<endl;
        cout<<a[i].result<<endl;
    }

    return 0;
}