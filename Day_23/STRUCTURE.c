#include<stdio.h>
int main()
{
	struct student
	{
		char name[50];
		int rollno;
		int mark;
	};
	struct student s1;
	struct student *p;
	p = &s1;
	printf("Enter name, rollno, mark: ");
	scanf("%s %d %d",&s1.name, &s1.rollno, &s1.mark);
        printf("NAME : %s\n",p->name);
	printf("ROLLNO : %d\n",p->rollno);
	printf("MARK : %d\n",p->mark);
	return 0;
}




