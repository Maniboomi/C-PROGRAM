#include<stdio.h>
void swap_pointer(int **a,int **b)
{
	int temp = **a;
	**a = **b;
	**b = temp;
	printf("Swap values using 2 pointer : %d %d\n",**a,**b);
}
int main()
{
	int num1 = 20;
	int num2 = 30;
	printf("The initial 2 pointer values: %d %d\n",num1,num2);
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int **ptr3 = &ptr1;
	int **ptr4 = &ptr2;
	swap_pointer(ptr3,ptr4);
	return 0;
}
