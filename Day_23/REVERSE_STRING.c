#include<stdio.h>
#include<string.h>
void rev(char* s)
{
	int l=0;
	int n;
	n = strlen(s);
	int r = n-1;
	while(l<r)
	{
		s[l] ^= s[r];
		s[r] ^= s[l];
		s[l] ^= s[r];
		l++;
		r--;
	}
}
int main()
{
	char s[] = "abcde";
	rev (s);
	printf("%s\n",s);
	return 0;
}
