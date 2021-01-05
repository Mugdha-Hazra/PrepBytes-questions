#include<iostream>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*first=NULL;
void create(int a[],int n)
{
  int i;
  struct node *t,*last;
  first = new node;
  first -> data = a[0];
  first -> next = NULL;
  last = first;
  for(i=1;i<n;i++)
  {
    t= new node;
    t -> data = a[i];
    t -> next = NULL;
    last -> next = t;
    last = t;
  }
}
void Rdisplay( struct node *p)
{
  if(p!=NULL)
  {
    Rdisplay(p->next);
    printf("%d\n",p->data);
  }
}
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int i,n,a[10000];
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    create(a,n);
    Rdisplay(first);
    t--;
  }
  return 0;
}
