#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fptr;
	fptr = fopen("daa.o", "r");
	if (fptr == NULL)
	{
		printf("File is not opened.");
	}
	else
	{
		printf("The file is read.");
	}
	return 0;
}
