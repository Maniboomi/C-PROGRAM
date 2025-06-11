#include<stdio.h>
struct status_flag
{
	int signflag : 3;
	int zeroflag : 1;
	int auxillaryflag : 4;
	int carryflag : 4;
	int parityflag : 3;
};
int main()
{
	struct status_flag s1;
	s1.signflag = 5;
	s1.zeroflag = 0;
	s1.auxillaryflag = 9;
	s1.carryflag = 7;
	s1.parityflag = 2;
	printf("Size of status_flag : %zu bytes\n",sizeof(s1));
	printf("signflag is : %d\n",s1.signflag);
	printf("zeroflag is : %d\n",s1.zeroflag);
	printf("auxillaryflag is : %d\n",s1.auxillaryflag);
	printf("carryflag is : %d\n",s1.carryflag);
	printf("parityflag is : %d\n",s1.parityflag);
	return 0;
}
