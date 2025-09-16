#include<stdio.h>
int main()
{
	int num = 25;
	int *ptr1 = &num;
	int *ptr2 = &num;
	
	printf("The Initial value : %d %d\n",*ptr1,*ptr2);

	*ptr1 = 30;

	printf("Two pointer Alias.. changing one pointer value : %d %d\n",*ptr1,*ptr2);
	
	*ptr2 = 50;

	printf("Two pointer Alias.. changing another pointer value : %d %d\n",*ptr1,*ptr2);
	return 0;
}



