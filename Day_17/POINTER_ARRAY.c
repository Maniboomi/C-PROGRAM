#include<stdio.h>
int main()
{
	char arr[] = "pointer";
	char *p = arr;
	printf("%c\n", *(p+3));
	return 0;
}   


/* 
 //#include<stdio.h>
 // int main()
 // {
 // int arr[3] = {1,2,3};
 // int (*p)[3] = &arr;
 // printf("%d\n",(*p)[1]);
 // return 0;
 // } */
