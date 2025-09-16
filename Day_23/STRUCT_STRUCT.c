#include<stdio.h>

struct student
{
	char name[25];
	int rollno;
	int mark;
};
void printstr(struct student);
int main()
{
	struct student s1 = {"John",7,92};
	printstr(s1);
	return 0;
}
void printstr(struct student s)
{
	printf("\n NAME : %s",s.name);
	printf("\n ROLLNO : %d",s.rollno);
	printf("\n MARK : %d\n",s.mark);
}
