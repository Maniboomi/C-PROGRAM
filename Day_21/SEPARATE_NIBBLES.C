#include<stdio.h>
int main()
{
	unsigned char value = 156;
	int low_nibble = value % 16;
	int high_nibble = value / 16;
	printf("LOWER NIBBLE IS %d\n",low_nibble);
	printf("HIGHER NIBBLE IS %d\n",high_nibble);
	return 0;
}
