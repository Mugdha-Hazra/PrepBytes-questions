#include <stdio.h>

long long nCr(int n, int r){
  long long value=1;
    for(int i=0;i<r;i++){
       value*=(n-i);
       value/=(i+1);
    }
    return value;
}

int main()
{
  int test;
  scanf("%d",&test);

  while(test--){

    int n, m, k;
    scanf("%d%d%d",&n,&m,&k);

    long long sum=0;

    for(int i=4; i<k; i++){
      sum += nCr(n,i)*nCr(m,k-i);
    }

    printf("%lld\n",sum);
  }
}
