#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
int parent(int i)
{
    return (i/2);
}   
int left(int i)
{
    return (i*2);
}
int right(int i)
{
return (i*2)+1;
}
void insert(int heap[],int *size,int val)
{
    int i = (*size);
    *size +=1;
    heap[i] = val;
    while(i!=1 && heap[parent(i)]>heap[i])
    {
        swap(&heap[parent(i)],&heap[i]);
        i = parent(i);
    }
}
int extract(int heap[],int *size)
{
    int root = heap[1];
    heap[1] = heap[(*size)-1];
    (*size)--;
    return root;
}
void heapify(int heap[],int i,int size)
{
    int l = left(i);
    int r = right(i);
    int s = i;
    if(l<size && heap[l]< heap[i])
        s = l;
    if(r<size && heap[r]< heap[s])
        s = r;
    if(s!=i)
    {
        swap(&heap[i],&heap[s]);
        heapify(heap,s,size);
    }
}
void decreaseKey(int heap[],int i,int *size)
{
    heap[i] = INT_MIN;
    while(i!=1 && heap[parent(i)]>heap[i])
    {
        swap(&heap[parent(i)],&heap[i]);
        i = parent(i);
    }
    extract(heap,size);
    heapify(heap,1,*size);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int size = 1;
        cin>>n>>k;

        int *heap =(int*) malloc(sizeof(int)*(n+1));
        int a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            insert(heap,&size,a[i]);
        }
        decreaseKey(heap,k,&size);
        for(int i=1;i<size;i++)
            cout<<heap[i]<<" ";
        cout<<endl;  
    }
    return 0;
}
