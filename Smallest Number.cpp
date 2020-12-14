#include <bits/stdc++.h> 
using namespace std; 

int findDuplicate(int arr[], int n, int k) 
{ sort(arr, arr + n); 
	int i = 0; 
	while (i < n) 
	{ int j, count = 1; 
	for (j = i + 1; j < n && arr[j] == arr[i]; j++) 
	count++; 
  if (count == k) 
			return arr[i]; 
	i = j; 
	} 
return -1; 
}
int main() 
{ int n,k,arr[10000000],i;
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cin>>arr[i];
	}cin>>k;
	cout << findDuplicate(arr, n, k); 
	return 0; 
} 
