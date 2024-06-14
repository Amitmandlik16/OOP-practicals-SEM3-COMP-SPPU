#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class student
{
    public:
    int roll;
    string name,dob,tele;
    student()
    {
        roll=0;
        name="";
        dob="";
        tele="";
    }
    void getdata()
    {
        cout<<"\n Enter the details of student respectively name>>roll>>dob>>tele ="<<endl;
        cin>>name>>roll>>dob>>tele;
    }
    void displaydata()
    {
        cout<<"\n printing details of student";
        cout<<"\n name="<<name<<", roll number="<<roll<<", date of birth="<<dob<<", telephone number="<<tele;
    }
};
vector<student>read()
{
    vector <student> v;
    student s;
    s.getdata();
    v.push_back(s);
    cout<<"data pushed in to the stack";
    return v;
}
void print(vector<student>v)
{
    for(student i:v)
    {
        i.displaydata();
    }
}
void insert(vector<student> &v)
{
    student s;
    s.getdata();
    v.push_back(s);
}
void search(vector<student> &v)
    {
        student s;
        int roll;
     cout<<"\n Enter roll no. of student to delete";
     cin>>roll;
     int flag=0;
     for(student i:v)
     {
         if(i.roll==roll)
         {
             cout<<"Student found";
             i.displaydata();
             cout<<"Student deleted";
             flag=1;
             break;
         }
     }
     if(flag==0)
     {
         
         cout<<"student not found";
     }
    }
    bool check1( student &s1, student &s2)
            {
                        return(s1.roll<s2.roll);
            }
  void sorting(vector<student> &v)
    {
        sort(v.begin(),v.end(),check1);
        cout<<"After sorting";
        print(v);
    }
int main()
{
    vector<student> vec;
    student s1;
    vec=read();
    print(vec);
    insert(vec);
    print(vec);
    search(vec);
    print(vec);
    sorting(vec);
    return 0;
}

