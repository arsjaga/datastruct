#include <stdio.h>
union student {
	int rollno;
	char name[20];
	int mark;
};
int main()
{
	union student stu1={101,"jaga",99};
	printf("%d\n",stu1.rollno);
	printf("%s\n",stu1.name);
	printf("%d\n",stu1.mark);
	return 0;
}
