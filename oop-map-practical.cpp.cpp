#include <iostream>
#include <map>
#include <iterator>
using namespace std;

class statmap
{
    string s,stat;
    int pop;
    map<string,int> state;
    public:
    void insert()
        {
            cout<<"Enter state and population "<<endl;
            cin>>stat>>pop;
            state.insert(pair<string,int>(stat,pop));
        }
    void display()
        {
            cout<<"state and population map "<<endl;
            for(auto itr=state.begin();itr!=state.end();itr++)
                {
                    cout<<itr->first<<"\t"<<itr->second<<endl;
                }
        }
    void search()
        {
            cout<<"Enter the state you want to search =";
            cin>>s;
            int flag=0;
            for(auto itr=state.begin();itr!=state.end();itr++)
                {
                    if(itr->first==s)
                        {
                            cout<<"population of state "<<itr->first<<" is "<<itr->second;
                            flag=1;
                        }
                }
            if(flag==0)
                {
                    cout<<"state "<<s<<" not found in map";
                }
        }
};

int main()
    {
        statmap s;
        int ch;    
        while(1)
            {
                cout<<"\n Enter \n 1.Insert state \n 2.display state and population \n 3.search state \n 4.Exit"<<endl;
                cin>>ch;
                switch(ch)  
                    {
                        case 1:
                            s.insert();
                            break;
                        case 2:
                            s.display();
                            break;
                        case 3:
                            s.search();
                            break;
                        case 4:
                            exit(0);
                        default:
                            cout<<"invalid choice";
                    }
            }
        
        
        return 0;
    }
