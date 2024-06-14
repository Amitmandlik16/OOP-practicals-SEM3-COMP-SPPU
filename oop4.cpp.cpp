#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ofstream fout("a.txt",ios::out);
    fout<<"this is first line\n";
    fout<<"this is second line \n";
    fout<<"this is third line \n";
    fout<<"this is fourth line \n";
    fout<<"this is fifth line \n";
    fout.close();
    ifstream fin("a.txt",ios::in);
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    return 0;
}