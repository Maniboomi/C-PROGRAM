#include<stdio.h>
#include<string.h>
int main()
{
	char res[20];
	float a =  32.23;
	sprintf(res, "%f", a);
	printf("The string for the num is %s\n",res);
	return 0;
}
