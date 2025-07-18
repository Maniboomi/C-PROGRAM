#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fptr;
	char data[50];
	char* ch;
	fptr = fopen("add.o", "r");
	if (fptr == NULL)
	{
		printf("File is not open.\n");
	}
	else
	{
		printf("The file is opened.\n");
	}
	ch = fgets(data,50,fptr);
	while(ch != NULL)
	{
		printf("%s\n",data);
		break;
	}
	fclose(fptr);
	return 0;
}
