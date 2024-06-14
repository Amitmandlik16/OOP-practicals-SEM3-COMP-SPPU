#include <iostream>
#include <fstream>
using namespace std;

class student
{
    string name;
    int roll;
    public:
    student()
    {
        roll=0;
        name="";
    }
    void getdata()
    {
        cin.ignore();
        cout<<"\n Enter your name";
        getline(cin,name);
        cout<<"\n Enter your roll number";
        cin>>roll;
    }
    void displaydata()
    {
        cout<<"\n your name is "<<name<<" and roll number is "<<roll;
    }    
};
int main()
{
    int n;
    cout<<"Enter total no of student want to enter data";
    cin>>n;
    student s[n];
    fstream fout("a.txt",ios::out);
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
        fout.write((char*)&s[i],sizeof(s[i]));
    }
    fout.close();
    cout<<"displaying total data of students";
    fstream fin("a.txt",ios::in);
    for(int i=0;i<n;i++)
    {
        fin.read((char*)&s[i],sizeof(s[i]));
        s[i].displaydata();
    }
    fin.close();
    return 0;
}