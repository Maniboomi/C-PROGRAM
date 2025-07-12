#include<stdio.h>
int main()
{
	int arr[7] = { 1,2,3,4,5,6,7};
	printf("Access array using pointer : %d\n", *(arr+3));
	printf("Accessing array using conceptual array is : %d\n", 3[arr]);
	int *ptr = arr+3;
	printf("Accessing element using negative pointer value is : %d\n",ptr[-2]);
	return 0;
}


