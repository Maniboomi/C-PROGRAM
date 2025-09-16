#include<stdio.h>
int main()
{
	unsigned char a = 12;
	unsigned char b = 23;
	printf(" A | B = %d (0x%x)\n",a|b,a|b);
	printf(" A & B = %d (0x%x)\n",a&b,a&b);
	printf(" A ^ B = %d (0x%x)\n",a^b,a^b);
	printf(" ~ A = %d (0x%x)\n",(unsigned char)~a,(unsigned char)~a);
	return 0;
}
