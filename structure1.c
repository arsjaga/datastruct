#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct student {
	char name[20];
	int rollno;
	int mark;
};

void main()
{
	struct student stu1={"jaga",101,76};
	struct student stu2;
	strcpy(stu2.name,"Raj");
	stu2.rollno=102;
	stu2.mark=99;
	printf("%s\n",stu1.name);
	printf("%d\n",stu1.rollno);
	printf("%d\n",stu1.mark);
	printf("%s\n",stu2.name);
	printf("%d\n",stu2.rollno);
	printf("%d\n",stu2.mark);
}
