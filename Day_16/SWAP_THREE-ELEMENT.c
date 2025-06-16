//SWAP THREE NUMBER USING CALL BY REFERENCE
#include<stdio.h>
void swapnumber(int *x, int *y, int *z)
{
	int temp;
	temp = *y;
	*y = *x;
	*x = *z;
	*z = temp;
};
int main()
{
	int a1,a2,a3;
	printf("Enter the first element : ");
	scanf("%d",&a1);
	printf("Enter the second element : ");
	scanf("%d",&a2);
	printf("Enter the third element : ");
	scanf("%d",&a3);
	printf("The Elements before swapping :\n ");
	printf("Element 1 is :%d\n Element 2 is :%d\n Element 3 is :%d\n",a1,a2,a3);
	swapnumber(&a1,&a2,&a3);
	printf("The value after swapping :\n ");
	printf("Element 1 is :%d\n Element 2 is :%d\n Element 3 is :%d\n",a1,a2,a3);
	return 0;
}

