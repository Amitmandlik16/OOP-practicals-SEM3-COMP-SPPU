#include <iostream>
using namespace std;

class publication
{
    protected:
    string title;
    float price;
    public:
        publication()
        {
            title="";
            price=0;
        }
};
class book:public publication
{
    int pages;
    public:
    book()
    {
        pages=0;
    }
    void getbook()
    {
        try
        {
        cout<<"\n Enter the name of book";
        getline(cin,title);
        cout<<"\n Enter price of book";
        cin>>price;
        cout<<"\n Enter total pages of book";
        cin>>pages;
        if(price<0 || pages<0)
        {
            throw 1;
        }
        }
        catch(int)
        {
            cout<<"Exception caught";
            price=0;
            pages=0;
        }
    }
    void displaybook()
    {
        cout<<"\n Book details";
        cout<<"\t Book title ="<<title;
        cout<<"\t Book price ="<<price;
        cout<<"\t Book pages ="<<pages;
    }
};
class tape:public publication
{
    float min;
    public:
    tape()
    {
        min=0;
    }
    void gettape()
    {
        try
        {
        cin.ignore();
        cout<<"\n Enter the name of tape";
        getline(cin,title);
        cout<<"\n Enter price of tape";
        cin>>price;
        cout<<"\n Enter total playing time of tape in minutes";
        cin>>min;
        if(price<0 || min<0)
        {
            throw 1;
        }
        }
        catch(int)
        {
            cout<<"Exception caught";
            price=0;
            min=0;
        }
    }
    void displaytape()
    {
        cout<<"\n Tape details";
        cout<<" \t Tape title ="<<title;
        cout<<"\t Tape price ="<<price;
        cout<<"\t Tape playing time(min) ="<<min;
    }
};
int main()
{
    book b1;
    b1.getbook();
    b1.displaybook();
    tape t1;
    t1.gettape();
    t1.displaytape();
    return 0;
}