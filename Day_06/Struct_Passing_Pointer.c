#include<stdio.h>
struct student
{
	char name[25];
	int rollno;
	int mark;
};
void printscr(struct student*);
int main()
{
	struct student s1 = {"Ajay",9,99};
	struct student *sp;
	sp = &s1;
	printscr(sp);
	return 0;
}
void printscr (struct student* sp)
{
	printf("\n NAME : %s",sp->name);
	printf("\n ROLLNO : %d",sp->rollno);
	printf("\n MARK : %d\n",sp->mark);
}
