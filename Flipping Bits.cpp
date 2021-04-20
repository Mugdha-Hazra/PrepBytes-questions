#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ int a,b,c;
  cin>>a>>b>>c;
//cout<<__builtin_popcount((a|b)^c)+__builtin_popcount(a&b&((a|b)^c))<<"\n";
 cout<<__builtin_popcount(c^=a|b)+__builtin_popcount(a&b&c)<<"\n";
} return 0;
}
/*
Step 1: a | b is what we have while c is what we want. 
An XOR operation finds all different bits, i.e. (a | b) ^ c 
sets the bits where flip(s) is needed. Then we count the set bits.
Step 2: There is only one case when two flips are needed:
a bit is 0 in c but is 1 in both a and b.
An AND operation finds all common 1 bits,
i.e. a & b & ((a | b) ^ c) 
sets the common 1 bits in a, b and the must-flip bits found in Step 1.
*/
