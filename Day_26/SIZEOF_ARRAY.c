#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5}; //For integer Array
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Integer Array : %d\n",n);

	char arr1[] = "BMANI"; //For String Array
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	printf("String Array : %d\n",n1);

	char arr2[] = {'M','A','N','I','B'}; // For Single Character Array
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	printf("Single Character Array : %d\n",n2);

	return 0;
}


