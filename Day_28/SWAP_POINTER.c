#include<stdio.h>
void swap(int** ptr1,int** ptr2)
{
	**ptr1 = **ptr1 ^ **ptr2;
	**ptr2 = **ptr1 ^ **ptr2;
	**ptr1 = **ptr1 ^ **ptr2;
	//printf("The Swap Two Pointer value of A is : %d\n",**ptr1);
	//printf("The Swap Two Pointer value of B is : %d\n",**ptr1);
}
int main()
{
	int a = 5;
	int b = 7;
	printf("The Swap Two Pointer value of A is : %d\n",a);
	printf("The Swap Two Pointer value of B is : %d\n",b);

	int *p1 = &a;
	int *p2 = &b;
	int **ptr1 = &p1;
	int **ptr2= &p2;
	swap(ptr1,ptr2);

	printf("The Swap Two Pointer value of A is : %d\n",a);
	printf("The Swap Two Pointer value of B is : %d\n",b);
	return 0;
}
