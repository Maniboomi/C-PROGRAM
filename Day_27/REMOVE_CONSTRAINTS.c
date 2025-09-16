#include<stdio.h>
#include<string.h>

int main()
{
	char str[10] = "EMBEDDED";
	printf("The String Constraints : %s\n",str);
	int n = strlen(str);
	int i,j,found=0;
	printf("The Removed Constraints are :");
	for(i=0;i<n;i++)
	{
		found = 0;
		for(j=0;j<i;j++)
		{
			if(str[i] == str[j])
			{
				found = 1;
				break;
			}
		}
		if(!found)
		{
			printf("%c",str[i]);
		}
	}
	printf("\n");
	return 0;
}

