#include<stdio.h>
int main()
{
	int arr[15],n,i;
	int *ptr;
	printf("Enter the element to store in the array : ");
	scanf("%d", &n);
	ptr = &arr[0];
	printf("The input number in the array :\n ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr =  &arr[n - 1];
	printf("The reversed element in the array : ");
	for(i = n; i > 0; i--)
	{
		printf("%d", *ptr);
		ptr--;
	}
	printf("\n");
	return 0;
}



