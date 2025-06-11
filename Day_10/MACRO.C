#include<stdio.h>
#define NBIT(n, pos)((n >> pos)  &1)
int main()
{
	int n, pos, val;
	printf("Enter the Number ");
	scanf("%d",&n); 
	printf("Enter the Bitposition (0-31) : ");
	scanf("%d",&pos);
	val = NBIT(n, pos);
	printf("The Bit %d of %d is : %d\n",pos ,n ,val);
	return 0;
}
