#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "carrer";
	char str2[] = "rarcer";
	int length1 ,length2;
	length1 = strlen(str1);
	length2 = strlen(str2);
	int use_str[20] = {0};
	int i ,j ,found;
	if (length1 == length2)
	{
		for(i=0;i<length1;i++)
		{
		for(j=0;j<length2;j++)
		{
		if (str1[i] == str2[j])
		{
			use_str[j]=i+1;
			found = 1;
			break;
		}
		}
		}
	}
		if(found != 1)
		{
			printf("NO %s is a permutation of %s\n",str2,str1);
		}
		else
		{
			printf("YES %s is a permutation of %s\n",str2,str1);
		}
		return 0;
}
