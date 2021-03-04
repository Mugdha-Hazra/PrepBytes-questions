#include <stdio.h>

int nCr(int n, int r){
  if(r==0)
    return 1;
  if(r==1 || r==n-1)
    return n;
  if(r > n/2)
    r = n-r;
  int num = 1,den = 1; 
  for(int i=1; i<=r; i++,n--){
    num*=n;
    }
  for(int i=2; i<=r; i++)
    den*=i;

 return num/den;
}

int main()
{

  int test;
  scanf("%d",&test);

  while(test--){

    int M,W,X,Y;
    scanf("%d%d%d%d",&M,&W,&X,&Y);

    long long waysOfArrangements = 1, waysOfSelection = nCr(M,X)*nCr(W,Y);

    for(int i=2; i<=X+Y; i++)
      waysOfArrangements*=i;

    printf("%lld\n",waysOfSelection*waysOfArrangements);

  }

}
