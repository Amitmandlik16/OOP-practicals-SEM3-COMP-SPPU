#include <iostream>
#include <string>
using namespace std;

class student
{
    string name,dob,address,tele,driving,bloodgroup;
    static int count;
    public:
    student()
    {
        name="";
        dob="";
        address="";
        tele="";
        driving="";
        bloodgroup="";
        count++;
    }
    ~student()
    {
        cout<<"student destructor called";
    }
    student(string name,string dob,string address,string tele,string driving,string bloodgroup)
    {
        name=name;
        dob=dob;
        address=address;
        tele=tele;
        driving=driving;
        bloodgroup=bloodgroup;
        count++;
    }
        student(student &stud)
    {
        name=stud.name;
        dob=stud.dob;
        address=stud.address;
        tele=stud.tele;
        driving=stud.driving;
        bloodgroup=stud.bloodgroup;
        count++;
    }
    static void counter()
    {
        cout<<"Total count is"<<count;
    }
    inline void getstudent()
    {
        cout<<"\n Enter name=";
        getline(cin,name);
        cout<<"\n Enter Date of birth in DD/MM/YYYY=";
        getline(cin,dob);
        cout<<"\n Enter address =";
        getline(cin,address);
        cout<<"\n Enter telephone number=";
        getline(cin,tele);
        cout<<"\n Enter driving license=";
        getline(cin,driving);
        cout<<"\n Enter blood bloodgroup=";
        getline(cin,bloodgroup);
    }
    friend class college;
};
class college
{
    int roll;
    char *division;
    string classname;
    public:
    college()
    {
        roll=0;
        division=NULL;
        classname="";
    }
    college(int roll,char div, string classname)
    {
        roll=roll;
        division=new char(div);
        classname=classname;
    }
    ~college()
    {
        delete division;
        cout<<"college destructor called";
    }
    inline void getcollege()
    {
        char div;
        cout<<"\n Enter your roll no =";
        cin>>roll;
        cout<<"\n Enter your division =";
        cin>>div;
        cout<<"\n Enter your classname is =";
        cin>>classname;
        division=new char(div); 
        
    }
    void displaydata(student &stud)
    {
        cout<<"\n printing the data of student";
        cout<<"\n your name is"<<stud.name;
        cout<<"\n date of birth is"<<stud.dob;
        cout<<"\n your address is "<<stud.address;
        cout<<"\n your telephone number is"<<stud.tele;
        cout<<"\n driving license number is "<<stud.driving;
        cout<<"\n bloodgroup is"<<stud.bloodgroup;
        cout<<"\n your roll no is "<<roll;
        cout<<"\n your classname is "<<classname;
        cout<<"\n your division is"<<division;
    }
};
int student::count=0;
int main()
{
    student s0("Amit Mandlik","16/12/2004","Akole","8007195215","12345678","A+");
    college c0(2205,'B',"SE Computer");
    s0.counter();
    c0.displaydata(s0);
    int n;
    cout<<"\n Enter total no of students= ";
    cin>>n;
    student s[n];
    college c[n];
    for(int i=0;i<n;i++)
    {
        s[i].getstudent();
        c[i].getcollege();
        c[i].displaydata(s[i]);
    }
    return 0;
}
