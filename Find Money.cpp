/*
Find Money
There is a straight path having 
N
 small boxes of size 
1
∗
1
. Each box contains a certain amount of money, Manish directly jumps to a certain box having value 
K
. Now as Manish is not good in maths help him, to find the total money on his left side and right side.

Note:- Consider the first occurrence of 
K
.

Input Format
First-line contains an integer 
T
, representing the number of test cases.
Next 
T
 lines contain two space-separated integers 
N
 and 
K
.
The next line contains 
N
 space-separated integers representing the amount of money in each box of size 
1
∗
1
.
Output Format
For each test case 
T
, print the desired output in a new line. If a box with money = 
K
 is not present print 
0
.
Constraints
1
<=
T
<=
1000

1
<=
N
,
K
<=
10
5

Time Limit
1 second

Example
Input
4
5 8
2 5 8 3 7
15 89
1 3 2 4 5 89 5 6 2 3 8 1 2 9 7
25 13
1 2 1 2 3 1 4 9 18 7 1 2 3 4 2 3 6 8 5 12 13 4 2 5 15
50 1999
1 2 1 2 3 1 4 9 18 7 1 2 3 4 2 3 6 8 5 12 13 4 2 5 15 1 2 1 2 3 1 4 9 18 7 1 2 3 4 2 3 6 8 5 12 13 4 2 5 15

Output
7 10
15 43
94 26
0

Sample test case explanation
For Input 
1

Since 
8
 is in the path so the sum of the left and right side is 
7
 and 
10
.
For Input 
2

Since 
89
 is in the path so the sum of the left and right side is 
15
 and 
43
.
For Input 
3

Since 
13
 is in the path so the sum of the left and right side is 
94
 and 
26
.
For Input 
4

Since 
1999
 is not in the path so 
0
.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{ int i,n,k,a[10000000],g=0,h=0,p=0,m=0;
cin>>n>>k;
for(i=0;i<n;i++)
{
  cin>>a[i];
} //int p=0;
for(i=0;i<n;i++)
{
  if(a[i]==k)
  { m=i;
    p=1;
    break;
  }
}
if(p>0)
{
for(i=0;i<n;i++)
{
  (i>m?g+=a[i]:h+=a[i]);
 
}
  cout<<h-k<<" "<<g<<"\n";
}
else
cout<<"0\n";
  t--;
}
  return 0;
}
