#include <iostream>
#include <map>
#include <iterator>
using namespace std;

class statmap
{
    string s,stat;
    int population;
    map<string,int> state;
    public:
    void insert()
    {
        cout<<"\n Enter the name of state =";
        cin>>stat;
        cout<<"\n Enter population of the state =";
        cin>>population;
        state.insert(pair<string,int>(stat,population));
    }
    void display()
    {
        for(auto itr=state.begin();itr!=state.end();itr++)
        {
            cout<<"\n state ="<<itr->first;
            cout<<"-> population ="<<itr->second;
        }
    }
    void search()
    {
        cout<<"\n Enter the state you want to search =";
        cin>>s;
        int flag=0;
        for(auto itr=state.begin();itr!=state.end();itr++)
        {
            if(itr->first==s)
            {
                cout<<"\n population of the state "<<itr->first<<"is "<<itr->second;
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"\n "<<s<<" state not found in map";
        }
    }
};
int main()
{
    int n;
    statmap s;
    cout<<"Enter the total states";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s.insert();
    }
    cout<<"Displaying total state map with population";
    s.display();
    s.search();
}