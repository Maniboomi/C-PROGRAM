#include<stdio.h>
#include<string.h>

int main()
{
	char str[10] = "EMBEDDED";
	//int ptr[10] = {0};
	int n = strlen(str);
	int i,j;
	int found = 0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str[i] == str[j])
			{
				printf("The First Duplicate is %c in %d\n",str[i],j);
				found = 1;
				break;
			}
		}
		if(found)
		{
			break;
		}
	}
	if(!found)
	{
		printf("No Duplicate Found!");
	}
	return 0;
}

