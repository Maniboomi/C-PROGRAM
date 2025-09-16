#include<stdio.h>
int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	printf("Enter Address of array Elements : \n");
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Adress of arr[%d][%d] : %p\n",i,j,(*(arr+i)+j));
		}
	}
	return 0;
}
