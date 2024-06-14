#include <iostream>
using namespace std;

#define size 20
template < class T > void
selection (T a[size], int n)
{
  int i, j, min;
  T temp;
  for (i = 0; i < n - 1; i++)
    {
      min = i;
      for (j = i + 1; j < n; j++)
	{
	  if (a[j] < a[min])
	    {
	      min = j;
	    }
	}
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  cout << "\n After selection  sort on array a" << endl;
  for (i = 0; i < n; i++)
    {
      cout << a[i] << "\t";
    }
};

int
main ()
{
  int i, n, ch;
  int a[size];
  float b[size];
  do
    {
      cout << "\n selection sort";
      cout << "\n Enter";
      cout << "\n 1.Integer array";
      cout << "\n 2.Float array";
      cout << "\n 3.Exit" << endl;
      cin >> ch;
      switch (ch)
	{
	case 1:
	  cout << "Enter the size of integer array =";
	  cin >> n;
	  cout << "\n Enter the elements of integer array" << endl;
	  for (i = 0; i < n; i++)
	    {
	      cout << "Enter " << i << "th element of int array =";
	      cin >> a[i];
	    }
	  cout << "array is " << endl;
	  for (i = 0; i < n; i++)
	    {
	      cout << a[i] << "\t";
	    }
	  selection (a, n);
	  break;
	case 2:
	  cout << "Enter the size of float array =";
	  cin >> n;
	  cout << "\n Enter the elements of float array" << endl;
	  for (i = 0; i < n; i++)
	    {
	      cout << "Enter " << i << "th element of int array =";
	      cin >> b[i];
	    }
	  cout << "array is " << endl;;
	  for (i = 0; i < n; i++)
	    {
	      cout << b[i] << "\t";
	    }
	  selection (b, n);
	  break;
	case 3:
	  exit (0);
	}
    }
  while (ch != 3);
  return 0;
}
