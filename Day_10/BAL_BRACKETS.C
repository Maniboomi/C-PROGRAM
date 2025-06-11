#include<stdio.h>
#define max 100
char stack[max];
int top = -1;
void push (char ch)
{
	stack[++top] = ch;
}
char pop()
{
	if(top == -1)
	{
		return '\0';
	}
	return stack[top--];
}
int match (char open,char close)
{
	if (open == '(' && close == ')' || open == '{' && close == '}' || open == '[' && close == ']')
	{
		return 1;
	}
	return 0;
}
int balanced( char expression[])
{
	for(int i=0;expression[i] != '\0';i++)
	{
		char ch = expression[i];
		if(ch == '(' || ch == '{' || ch == '[')
		{
			push(ch);
		}
		else if(ch == ')' || ch == '}' || ch == ']')
		{
			char last = pop();
		if(!match (last,ch))
		{
			return 0;
		}
	}
	}
	return top ==-1;
}
int main()
{
	char expression[100];
	printf("Enter an expression with brackets: ");
	scanf("%s",expression);
	if (balanced(expression))
	{
		printf("The expression is balanced brackets \n");
	}
	else
	{
		printf("Not balanced brackets \n");
	}
	return 0;
}
