#include<stdio.h>
int main()
{
	typedef struct student
	{
		char name[25];
		int rollno;
		int mark;
	}
	typedef struct student stu;
	stu s1;
	stu *p;
	p = &s1;
	printf("Enter Name : Rollno : Mark : ");
	scanf("%s %d %d",&s1.name,&s1.rollno,&s1.mark);
	printf("NAME : %s",p->name);
	printf("ROLLON : %d",p->rollon);
	printf("MARK : %d",p->mark);
	return 0;



