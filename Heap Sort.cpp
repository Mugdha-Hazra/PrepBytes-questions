#include <stdio.h>
int parent(int i)
{
return i/2;
}
int left(int i)
{
return i*2;
}
int right(int i)
{
return (i*2)+1;
}
void swap(int *a,int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
void insert(int heap[], int *size, int val)
{
int i = *size;
heap[i] = val;
(*size)++;
while( i!=1 && heap[parent(i)]<heap[i])
{
    swap(&heap[parent(i)],&heap[i]);
    i = parent(i);
}
}
void heapify(int heap[],int i, int size)
{
int l = left(i);
int r = right(i);
int s= i;
if(l<size && heap[l]< heap[i])
s = l;
if(r<size && heap[r]<heap[s])
s = r;

if(s!=i)
{
    swap(&heap[i],&heap[s]);
    heapify(heap,s,size);
}
}
void heapSort(int heap[], int n)
{
    // build heap (rearrange array)
    for (int i = n / 2 ; i >= 1; i--)
        heapify(heap,i,n);
    // one by one extract an element from heap
    for (int i=n-1; i>=1; i--)
    {
        // move current root to end
        swap(&heap[1], &heap[i]);
        // call max heapify on the reduced heap
        heapify(heap,1,i);
    }
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n;
    scanf("%d",&n);
    int size=1;
    int *heap = (int *)malloc(sizeof(int)*(n+1));
    while(n--)
    {
    int a;
    scanf("%d",&a);
    insert(heap,&size,a);
    }

    heapSort(heap,size);

    for(int i=1;i<size;i++)
    {
    printf("%d ",heap[i]);
    }
    printf("\n");
}

return 0;
}
