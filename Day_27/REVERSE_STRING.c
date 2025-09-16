#include<stdio.h>
#include<string.h>

int main()
{
	char arr[] = "EMBEDDED";
	char ptr[] ={0};
	int n = sizeof(arr)/sizeof(arr[0]);
	//int n = strlen(arr);
	printf("%d\n",n);
	int j = n-2;
	printf("The Initial String is : %s\n",arr);
	for(int i=0;i<n;i++)
	{
		ptr[i] = arr[j - i];
	}
	ptr[n-1] = '\0';
	printf("The Reversed String is : %s\n",ptr);
	return 0;
}
