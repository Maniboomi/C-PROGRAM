#include<stdio.h>
struct student 
{
	char ch;
	int str;
	short int srt;
};
int main()
{
	struct student s1;
	s1.ch = 'A';
	s1.str = 32;
	s1.srt = 32000;
	printf("The Sizeof struct : %lu bytes\n",sizeof(s1));
	printf("The Address of ch : %lu bytes\n",(unsigned long)&s1.ch);
	printf("The Address of str : %lu bytes\n",(unsigned long)&s1.str);
	printf("The Address of srt : %lu bytes\n",(unsigned long)&s1.srt);
	return 0;
}

