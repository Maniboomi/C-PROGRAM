#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "Mani";
	char arr2[] = "Kandan";
	printf("The First String is : %s\n",arr1);
	printf("The Second String is : %s\n",arr2);

	int n1 = strlen(arr1);
	int n2 = strlen(arr2);

	for(int i=0;i<n2;i++)
	{
		arr1[n1+i] = arr2[i];
	}
	arr1[n1+n2] = '\0';
	printf("The concatenate two string is : %s\n",arr1);
	return 0;
}




