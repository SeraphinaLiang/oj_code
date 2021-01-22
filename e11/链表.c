#include "stdio.h"
#include "malloc.h"
#define LEN sizeof(struct student)

struct student
{
     long num;
     int score;
     struct student *next;
};

struct student *create(int n)
{ 
     struct student *head=NULL,*p1=NULL,*p2=NULL;
     int i;
     for(i=1;i<=n;i++)
     {  p1=(struct student *)malloc(LEN);
        scanf("%ld",&p1->num);    
        scanf("%d",&p1->score);    
        p1->next=NULL;
        if(i==1) head=p1;
        else p2->next=p1;
        p2=p1;
      }
      return(head);
}

struct student *insert(struct student *head, struct student *stud)
{  
struct student *p0,*p1,*p2; 
    p1=head;  p0=stud; 
    if(head==NULL) 
      {head=p0;} 
    else 
   { while( (p0->num > p1->num) && (p1->next!=NULL) ) 
       { p2=p1;     p1=p1->next;} 
     if( p0->num < p1->num ) 
      {  if( head==p1 ) head=p0; 
           else p2->next=p0; 
         p0->next=p1; } 
     else {  p1->next=p0;} 
     } 
    return(head);
}

struct student *del(struct student *head,long num)
{
    struct student *p1,*p2;
    p1=head;
    while(p1!=NULL)
    {
        if(p1->num == num)
        {
          if(p1 == head) head=p1->next;
          else p2->next=p1->next;
          free(p1);
          break;
        }
        p2=p1;
        p1=p1->next;
    }
    return(head);
}

struct student *reverse(struct student *head)
{
struct student *p1,*p2,*p3;
    p2=head;
     p3=head->next;
   do
  {
    p1=p2;p2=p3;p3=p2->next;
    p2->next=p1;
   }while(p3!=NULL);
    head->next=NULL;
   return(p2);
}

struct student *merge(struct student *head, struct student *head2)
{ 
struct student *p;
p=head;
while(p->next!=NULL){
    p=p->next;
}
p->next=head2;
return head;
}

struct student *sort(struct student *head)
{
struct student *head1=NULL,*p,*q;
    p=q=head;
    while(p!=NULL)
    {
        q=q->next;
        p->next=NULL;
        head1=insert(head1,p);
        p=q;
    }
    return head1;
}

void print(struct student *head)
{
    struct student *p;
    p=head;
    while(p!=NULL)
    {
        printf("%8ld%8d",p->num,p->score);
        p=p->next;
        printf("\n");
    }
}

main()
{
    struct student *head, *head2;
    int n;
    long del_num;
    scanf("%d",&n); 
    head=create(n);
    print(head);
    scanf("%d",&n); 
    head2=create(n);
    print(head2);
    head = merge(head, head2);    
    print(head);
}
