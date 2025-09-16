#include<stdio.h>
int main()
{
	char *p = "HELLO";
	p[0] = 'H';
	printf("After Modifying Pointer Array : %s\n",*p);
	return 0;
}
// The assigning of this pointer variable so HELLO stored in a read only memory....... it cannot be modified using pointer like this.... if it is declaring like nrml array its should stored in stack (writable) array....
