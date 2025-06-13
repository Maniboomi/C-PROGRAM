#include<stdio.h>
union student
{
	int rollno;
	float height;
	char initial;
};
int main()
{
	union student data;
	data.rollno = 21;
	data.height = 5.21;
	data.initial = 'N';
	printf("The Size of the first element : %d\n",sizeof(data.rollno));
	printf("The Size of the second element : %d\n",sizeof(data.height));
	printf("The Size of the third element : %d\n",sizeof(data.initial));
	printf("The Size of the union : %d\n",sizeof(data));
	return 0;
}




