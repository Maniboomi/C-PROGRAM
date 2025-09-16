#include<stdio.h>
#include<string.h>
char split(char* str,char** first,char** second)
{
	int len = strlen(str);
	int mid = len / 2;
	printf("%d\n",mid);
        char m=str[mid];
	*second = &str[mid+1];
	str[mid] = '\0'; 
	*first = str;
	return m;
}
int main()
{
	char str[20] = "STRINGSEARCH";
	char *first;
	char *second;
        char start=split(str,&first,&second);
	printf("The first split string is :%s\n",first);
	printf("The second split string is :%c%s\n",start,second);
	return 0;
}


