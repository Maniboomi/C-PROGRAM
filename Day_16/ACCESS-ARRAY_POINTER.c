#include<stdio.h>
int main()
{
	int arr[25], i, n;
	printf("Number of elements to store in an array : ");
	scanf("%d",&n);
	printf("Enter the elements to store in an array :\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	printf("The Elements you entered are :");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	printf("Accessing the Element in an array using pointer : %d\n",*(arr+2));
	return 0;
}




