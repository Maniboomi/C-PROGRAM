#include<stdio.h>
int main()
{
	struct student
	{
		char name[25];
		int rollno;
		int mark;
	};
	struct student s1;
	printf("Enter Name: Rollno: mark:");
	scanf("%s %d %d",&s1.name,&s1.rollno,&s1.mark);
	printf("Name : %s\n",s1.name);
	printf("Rollno : %d\n",s1.rollno);
	printf("Mark : %d\n",s1.mark);
	return 0;
}
