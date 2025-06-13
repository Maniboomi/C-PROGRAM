#include<stdio.h>
void B(void (*ptr)())
{
	ptr();
}
void A()
{
	printf("Callback Function is Called.\n");
};
int main()
{
	void (*ptr)() = &A;
	B(ptr);
	return 0;
}
