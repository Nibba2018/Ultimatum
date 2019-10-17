#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}node;
typedef struct queue
{
node *r;
node *f;
}queue;
void insert_queue(queue *,int);
int delete_queue(queue *);
int display(queue *);
int main()
{
queue *q;
int ch,n,a;
q=(queue*)malloc(sizeof(queue));
q->r=NULL;
q->f=NULL;
while(1)
{
printf("\n Enter your choice \n 1 for enqueue\n 2 for dequeue\n 3 for display \n 4 to exit the program\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n Enter the number to be inserted : ");
scanf("%d",&n);
insert_queue(q,n);
break;
case 2:a=delete_queue(q);
if(a!=-1)
printf("Element removed is :- %d",a);
break;
case 3:display(q);
break;
case 4:return 0;
break;
default:printf("Invalid choice");
}
}
}
void insert_queue(queue *q,int m)
{
node *new;
new=(node*)malloc(sizeof(node));
new->data=m;
new->next=NULL;
if(q->r==NULL)
{
q->r=new;
q->f=new;
}
else
{
q->r->next=new;
q->r=new;
}
}
int delete_queue(queue *q)
{
node *new;
int t;
if(q->f==NULL)
{
printf("underflow");
return -1;
}
new=q->f;
q->f=q->f->next;
new->next=NULL;

t=new->data;
if(new==q->r)
q->r=NULL;
free(new);
return t;
}
int display(queue *q)
{
node *p;
p=q->f;
if(p==NULL)
{ printf("queue is empty");
	return 0;
}	
while(p!=NULL)
{
printf("%d  ",p->data);
p=p->next;
}
return 0;
}













