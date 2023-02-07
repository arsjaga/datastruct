#include <stdio.h>
struct student {
	int rollno;
	char name[20];
	int mark;
};
void display(struct student *stu1);
void main()
{
	struct student stu1={101,"jaga",100};
	display(&stu1);
}
void display(struct student *stu1)
{
	printf("%d\n",(*stu1).rollno);
	printf("%s\n",stu1->name);
	printf("%d\n",stu1->mark);
}


