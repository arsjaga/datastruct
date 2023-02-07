#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *address;
};
struct node *head;
struct node *temp;
struct node *ptr;
void display(struct node *head);
int main()
{
	head=malloc(sizeof(struct node));
	head->data=10;
	head->address=NULL;
	display(head);
	return 0;
}
void display(struct node *head)
{
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL) {
		printf("%d\n",ptr->data);
		ptr=ptr->address;
	}
}

