#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("Enter a first number, operator and second number: ");
	scanf("%d %c %d",&a,&op,&b);
	switch(op)
	{
		case '+':
			printf("%d\n",a+b);
			break;
		case '-':
			printf("%d\n",a-b);
			break;
		case '*':
			printf("%d\n",a*b);
			break;
		case '/':
			printf("%d\n",a/b);
			break;
		case '%':
			printf("%d\n",a%b);
			break;
		default:
			printf("Enter a Valid Operator \n");
		return 0;
	}
}
