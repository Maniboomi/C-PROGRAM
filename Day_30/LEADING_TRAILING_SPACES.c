#include<stdio.h>
#include<string.h>
int main()
{
	char str[40] = "   SILICON  CRAFT   VLSI   ";
	int n = strlen(str);
	int i,count;
	printf("The number of characters : %d\n",n);
	for(i=0;i<n;i++)
	{
		if(str[i] != ' ')
		{
			printf("%c",str[i]);

		}
		//printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
