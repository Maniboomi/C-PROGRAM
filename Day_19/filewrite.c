#include<stdio.h>
#include<string.h>
int main()
{
	char data[50] = "SILICON CRAFT WELCOMES YOU !";
	FILE* fptr;
	fptr = fopen("add.o", "w");
	if (fptr == NULL)
	{
		printf("File is not opened.\n");
	}
	printf("File is created successfully.\n");
	fputs(data,fptr);
	printf("The fputs function in write mode is executed.\n");
	return 0;
}
