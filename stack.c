#include<stdio.h>
#include<stdlib.h>
struct stack{
int k;
struct stack *st;
};
struct stack *head=NULL;
#define m  10
void push(int n,int c);
void pop();
void display();
void main()
{
int choice=1; int n,i,k;


while(choice == 1)
{
printf("Enter your choice \n 1. Push \n 2. Pop \n 3. Display \n ");
scanf("%d",&n);
switch(n)
{
case 1:

printf("Enter the value to push into stack : ");
scanf("%d",&k);
int c=1;
push(k,c);
c++;
break;

case 2:

pop();
break;

case 3:

display();
break;

case 4:
break;
}
printf("Enter \n1. to continue \n0. to end : ");
scanf("%d",&choice);
}
}

void push(int data,int c)
{
struct stack *new = (struct stack*)malloc(sizeof(struct stack*));
if(c==m){
printf("stack overflow");}

else{
new->k=data;
new->st=head;
head=new;}
}
void pop()
{
struct stack *del= (struct stack*)malloc(sizeof(struct stack*));
del = head;
if(head==NULL)
printf("stack is empty\n");
else{
head=del->st;
del->st=NULL;
printf("%d deleted\n",del->k);
free(del);
}
}
void display()
{
struct stack *temp = (struct stack*)malloc(sizeof(struct stack*));
temp=head;
printf("Stack is : ");
while(temp!=NULL)
{
printf(" %d \n",temp->k);
temp=temp->st;
}
}

