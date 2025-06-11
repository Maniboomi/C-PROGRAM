#include<stdio.h>
int main()
{
	int s[20], n, i, j;
	printf("Number of Elements: ");
	scanf("%d",&n);
	printf("The Elements With Some Same Numbers :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	int index = 0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(s[i] == s[j])
				break;
		}
			if(j == i)
			{
				s[index] = s[i];
				index++;
			}
	}	
	printf("After Remove Duplicates :");
	for(i=0;i<index;i++)
	{
		printf("%d\t",s[i]);
	}
	printf("\n");
	return 0;
}
