#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "EMBEDDED SYSTEM";
	int n = strlen(str);
	for(int i=0;i<n/2;i++)
	{
		int temp = str[i];
		str[i] = str[n-1-i];
		str[n-1-i] = temp;
	}
	printf("The Reversed String is %s\n",str);
	return 0;
}

