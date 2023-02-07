#include <stdio.h>
#define N 5
int stack[N];
int top=-1;

void push();
void pop();
void peek();
void display();

void main()
{
int select,n;
do
{
printf("Press the below one\n1.Push \n2.POP\n3.Peek\n4.Display\n");
scanf("%d",&select);
switch(select)
{
case 1:
	push();
	break;
case 2:
	pop();
	break;
case 3:
	peek();
	break;
case 4:
	display();
	break;
default:
	printf("You entered the Wrong Number\n");
	break;
}
printf("Press 1 to cointune \n");
scanf("%d",&n);
}while(n);
}

void push()
{
int data;
if(top>N-1)
{
printf("Stack overflow\n");
}
else
{
top++;
printf("Enter the Data:\n");
scanf("%d",&data);
stack[top]=data;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("Stack is Empty\n");
}
else
{
item=stack[top];
printf("Delete the Data is =%d\n",item);
top--;
}
}

void peek()
{
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
}
