
#include <iostream>
#include<algorithm>

using namespace std;
int
compare (int a, int b)
{
  return a < b ? b : a;
}

int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int n;
      cin >> n;
      int a[n];

      for (int i = 0; i < n; i++)
	{
	  cin >> a[i];

	}
      int max = a[0];

      for (int i = 1; i < n; i++)
	{
	  if (a[i] > max)
	    max = a[i];
	}
	int hr=0;
	int hrs[n];
	while(max>0)
	{
	    for(int i=0;i<n;i++)
	    {
	        if(max==a[i])
	        {
	            hr++;
	            hrs[i]=hr;
	        }
	    }
	    max--;
	}
	for(int i=0;i<n;i++)
	cout<<hrs[i]<<" ";
	cout<<endl;

    }

  return 0;
}
