#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int findLongestConseqSubseq(int arr[], int n) 
{ unordered_set<int> S; 
  for (int i = 0; i < n; i++) 
  S.insert(arr[i]); 
  int ans = 0; 
  for (int i = 0; i < n; i++) 
  { if (S.find(arr[i] - 1) == S.end())
  { int j = arr[i]; 
  while (S.find(j) != S.end())   j++;  
  ans = max(ans, j - arr[i]);  } 
  } 
  return ans; 
} 
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int n,i,a[1000000];
   cin>>n;
   if(n>=3)
   {for(i=0;i<n;i++)
   {cin>>a[i];}
   (findLongestConseqSubseq(a,n)>=3?cout<<"YES\n":cout<<"NO\n");
 }
 else
 {cout<<"NO\n";}}
  return 0;
}
