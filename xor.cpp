#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int myXOR(int x, int y)
{
    int res = 0; // Initialize result
     
    // Assuming 32-bit Integer 
    for (int i = 31; i >= 0; i--)                     
    {
       // Find current bits in x and y
       bool b1 = x & (1 << i);
       bool b2 = y & (1 << i);
        
        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);          
 
        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}
int main() 
{
               int t;
               cin>>t;
               while(t--)
               {
                              long long c,d=0,x,i,j,max=0,m=0;
                              long long a[]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912,2147483648};
                              cin>>c;
                              for(i=0;i<31;i++)
                              {
                                             if(a[i]>=c)
                                             {
                                                            x=a[i];
                                                            break;
                                             }
                              }
                            // cout<<x;
                              for(i=1;i<=x;i++)
                              {
                                             for(j=1;j<=x;j++)
                                             {
                                                            if(myXOR(i, j) == c)
                                                            {   //m=i^j;
                                                                          // cout<<m;
                                                                           if(i * j > max)
                                                                           { max=i*j;}
                                                            }
                                                       //cout<<"/"<<m;     
                                             }
                              }
                              cout<<max<<"\n";
               }
               return 0;
}
