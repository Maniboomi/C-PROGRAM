#include<stdio.h>
union employee
{
	char* ename;
	char stname[20];
	int period;
};
int main()
{
	union employee emp;
	union employee *ptr;
	emp.ename = "John Mc donald";
	ptr = &emp;
	printf("The Employee %s from %s \n", (*ptr).ename ,ptr-> stname);
	printf("The pincode : %d\n",ptr-> period);
	return 0;
}


