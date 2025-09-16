#include<stdio.h>
int mystr(char* str)
{
	int i;
	for(i=0;str[i] != '\0';i++);
	return i;
}
int main()
{
	char str[] = "Mani Kandan B";
	int length = mystr(str);
	printf("Length of the String : %d\n",length);
	return 0;
}

