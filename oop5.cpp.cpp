#include <iostream>
using namespace std;

#define size 10
template<class T>
void selectionsort(T A[size],int n)
{
    int min;
    T temp;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"sorted list is ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
}
int main()
{
    int n;
    cout<<"Enter total no of integer elements=";
    cin>>n;
    int A[n];
    cout<<"Enter integer array";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element =";
        cin>>A[i];
    }
    selectionsort(A,n);
    cout<<"Enter total no of float elements=";
    cin>>n;
    float B[n];
    cout<<"Enter integer array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element =";
        cin>>B[i];
    }
    selectionsort(B,n);
    return 0;
}