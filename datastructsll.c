#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *address;
};
struct node *head,*temp,*newnode;
void create();
void addbegin();
void addend();
void addmiddle();
void deletebegin();
void deletemiddle();
void deleteend();
void display();
int main(void)
{
int m,n;

do
{
printf("Press below one\n1.Create the node\n2.Add Begin\n3.ADD in Middle\n4.Add End\n5.Delete Begin\n6.Delete Middle\n7.Delete End\n8.Display\n");
scanf("%d",&n);
switch(n) {
	case 1:
		create();
		break;
	case 2:
		addbegin();
		break;
	case 3:
		addmiddle();
		break;
	case 4:
		addend();
		break;
	case 5:
		deletebegin();
		break;
	case 6:
		deletemiddle();
		break;
	case 7:
		deleteend();
		break;
	case 8:
		display();
		break;
	default:
		printf("Pls Select the Correct Value\n");
		break;
}
printf("\nDo you want to continue to press 1 \n");
scanf("%d",&m);
}while(m);
		
return 0;
}

void create()
{
int select;
head=NULL;
do
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the Data :\n");
scanf("%d",&newnode->data);
newnode->address=NULL;

if(head==NULL)
{
head=temp=newnode;
}
else
{
temp->address=newnode;
temp=newnode;
}
printf("\n add one more data press 1 \n");
scanf("%d",&select);
}while(select);
}
void display()
{
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->address;
}
}


void addbegin()
{
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the Data at begin :\n");
scanf("%d",&newnode->data);
newnode->address=temp;
head=newnode;
}


void addend()
{
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the Data at end :\n");
scanf("%d",&newnode->data);

while(temp->address!=NULL)
{
temp=temp->address;
}
temp->address=newnode;
newnode->address=NULL;
}

void addmiddle()
{
temp=head;
int pos,i=1;
printf("Enter the position of the Node\n");
scanf("%d",&pos);
while(i<pos)
{
temp=temp->address;
i++;
}

newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the Data at middle :\n");
scanf("%d",&newnode->data);
newnode->address=temp->address;
temp->address=newnode;

}

void deletebegin()
{
temp=head;
head=head->address;
free(temp);

}
void deletemiddle()
{
temp=head;
int pos,i=1;
printf("Enter the position of the node\n");
scanf("%d",&pos);
while(i<pos)
{
newnode=temp;
temp=temp->address;
i++;
}
newnode->address=temp->address;
free(temp);

}
void deleteend()
{
temp=head;
while(temp->address!=NULL)
{
newnode=temp;
temp=temp->address;
}
newnode->address=NULL;
free(temp);
}









