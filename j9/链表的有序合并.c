#include "stdio.h"
#include "malloc.h"
#define LEN sizeof(struct DATA)

struct DATA
{
     long num;
     struct DATA *next;
};

struct DATA *create(int n)
{
     struct DATA *head=NULL,*p1=NULL,*p2=NULL;
     int i;
     for(i=1;i<=n;i++)
     {  p1=(struct DATA *)malloc(LEN);
        scanf("%ld",&p1->num);
        p1->next=NULL;
        if(i==1) head=p1;
        else p2->next=p1;
        p2=p1;
      }
      return(head);
}

struct DATA *merge(struct DATA *head, struct DATA *head2)
{
    struct DATA *p=NULL;
      p=head;
     if(head==NULL)
        {
            return head2;
        }
      else if(head2==NULL) return head;
      else {
      while(p->next!=NULL)
      {
     p=p->next;}
      p->next=head2;}
    return head;
}

struct DATA *insert(struct DATA *head, struct DATA *d)
{
    struct DATA *p0,*p1,*p2;
    p1=head;  p0=d;
    if(head==NULL)
      {head=p0;}
    else
   { while( (p0->num >= p1->num) && (p1->next!=NULL) )
       { p2=p1;     p1=p1->next;}
     if( p0->num < p1->num )
      {  if( head==p1 ) head=p0;
           else p2->next=p0;
         p0->next=p1; }
     else {  p1->next=p0;}
     }
    return head;
}

struct DATA *sort(struct DATA *head) 
{ 
    struct DATA *head1=NULL,*p,*q;
    p=q=head;
    while(p!=NULL)
    {
        q=q->next;
        p->next=NULL;
        head1=insert(head1,p);
        p=q;
    }
    head=head1;
    return head;
    return head;
} 

void print(struct DATA *head)
{
    struct DATA *p;
    p=head;
    while(p!=NULL)
    {
        printf("%ld",p->num);
        p=p->next;
        printf("\n");
    }
}

main()
{
    struct DATA *head, *head2;
    int n;
    long del_num;
    scanf("%d",&n);
    head=create(n);
    scanf("%d",&n);
    head2=create(n);
    head = merge(head, head2);
    head = sort(head);
    print(head);
}