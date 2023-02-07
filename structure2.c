#include <stdio.h>
struct student {
	int rollno;
	char name[20];
	int mark[5];
};
void main()
{
	struct student stu1[50];
	int n,i,j;
	printf("Enter the student Number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		printf("Enter the student[%d] details \n",i);
		scanf("%d%s",&stu1[i].rollno,stu1[i].name);
		for(j=1;j<=5;j++) {
			printf("Enter the student[%d] mark[%d]\n",i,j);
			scanf("%d",&stu1[i].mark[j]);
		}
	}
	for(i=1;i<=n;i++) {
		printf("%d\n%s\n",stu1[i].rollno,stu1[i].name);
		for(j=1;j<=5;j++) {
			printf("%d\n",stu1[i].mark[j]);
		}
	}
}

