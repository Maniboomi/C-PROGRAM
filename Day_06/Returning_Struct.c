#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int rollno;
	int mark;
};
struct student createstr(char [],int,int);
int main()
{
	struct student s1;
	s1 = createstr("VIMAL",5,499);
	printf("\n NAME: %s",s1.name);
	printf("\n ROLLNO : %d",s1.rollno);
	printf("\n MARK : %d\n",s1.mark);
	return 0;
}
struct student createstr(char name[],int rollno,int mark)
{
	static struct student s;
	strcpy(s.name,name);
	s.rollno = rollno;
	s.mark = mark;
	return s;
}


