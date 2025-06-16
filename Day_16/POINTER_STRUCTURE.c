#include<stdio.h>
#include<string.h>
struct employee
{
	char ename[20];
	char stname[20];
	int pincode;
};
int main()
{
	struct employee emp;
	strcpy(emp.ename,"mohanram");
	strcpy(emp.stname,"mogappair");
	emp.pincode = 654321;
	struct employee *ptr = &emp;
	printf(" The Employee %s from %s\n",ptr-> ename, ptr-> stname);
	printf("Pincode : %d\n",ptr-> pincode);
	return 0;
}


