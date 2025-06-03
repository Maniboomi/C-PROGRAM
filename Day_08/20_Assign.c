//GLOBAL_VARIABLE
#include<stdio.h>
int totalmarks = 0;
void addmarks(int marks)
{
totalmarks +=marks;
printf("addmarks %d totalmarks %d\n",marks,totalmarks);
};
int main()
{
	printf("initial totalmarks : %d\n",totalmarks);
	addmarks(30);
	addmarks(25);
	addmarks(45);
	printf("Final totalmarks : %d\n",totalmarks);
}
