#include<stdio.h>
struct student
{
	int mynum;
	char myinitial;
};
int main()
{
	struct student s1;
	s1.mynum = 13;
	s1.myinitial;
	printf("My Number is : %d\n",s1.mynum);
	printf("My Initial is :%c\n",s1.myinitial);
	return 0;
}
