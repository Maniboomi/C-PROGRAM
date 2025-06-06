#include<stdio.h>
int substring(char* t , char* p)
{
	int i,j;
	for(i=0;t[i] != '\0';i++)
	{
		for(j=0;p[j] != '\0';j++)
		{
			if(t[i+j] != p[j])
				break;
		}
			if(p[j] == '\0')
				return i;
		}
		return -1;
}
int main()
{
	char t[] = "this is a simple substring";
	char p[] = "substring";
	int find;
	find = substring(t,p);
	printf("%s\n",t);
	printf("%s\n",p);
	if(find != -1)
	{
		printf("substring found at index: %d\n",find);
	}
	else
	{
		printf("substring not found.\n ");
	}
	return 0;
}	
