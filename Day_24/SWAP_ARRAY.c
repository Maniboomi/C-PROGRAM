#include<stdio.h>
int main()
{
	int arr1[3] = {1,2,3};
	int arr2[3] = {4,5,6};
	int *p1 = arr1;
	int *p2 = arr2;
	int temp;

	printf("The array1 elements are : %d %d %d\n",arr1[0],arr1[1],arr1[2]);
	printf("The array2 elements are : %d %d %d\n",arr2[0],arr2[1],arr2[2]);

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	p1++;
	p2++;
	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	p1++;
	p2++;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("The array1 elements are : %d %d %d\n",arr1[0],arr1[1],arr1[2]);
	printf("The array2 elements are : %d %d %d\n",arr2[0],arr2[1],arr2[2]);
	return 0;
}



