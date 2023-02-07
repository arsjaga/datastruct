#include <stdio.h>
#define N 5
int queue[N];
int first=-1,last=-1;

void push();
void pop();
void display();

void main()
{
int select,n;
do
{
printf("Press below one \n1.Push\n2.Pop\n3.Display\n");
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
	display();
	break;
default:
	printf("Entered Wrong Number\n");
	break;
}
printf("You want to continue press 1\n");
scanf("%d",&n);
}while(n);
}
void push()
{
int data;
printf("Enter the Data:\n");
scanf("%d",&data);
if(last>N-1)
{
printf("Queue is overflow\n");
}
else if(first==-1 && last==-1)
{
first=last=0;
queue[last]=data;
}
else
{
last++;
queue[last]=data;
}
}

void pop()
{
int item;
if(first==-1)
{
printf("Queue is Empty\n");
}
else
{
item=queue[first];
printf("Deleted Data is %d",item);
first++;
}
}

void display()
{
if(first==-1 && last==-1)
{
printf("Queue is Empty\n");
}
else
{
int i;
for(i=first;i<=last;i++)
{
printf("%d\t",queue[i]);
}
}
}


