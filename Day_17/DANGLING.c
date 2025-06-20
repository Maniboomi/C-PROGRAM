/*#include <stdio.h>

int* fun() {
    int x = 10;
    return &x;
}

int main() {
    int *p = fun();
    printf("%d\n", *p);
    return 0;
}
*/

#include<stdio.h>
void fun(int *ptr)
{
	*ptr = 10;
}
int main()
{
	int x;
	fun(&x);
	printf("%d\n",x);
	return 0;
}


