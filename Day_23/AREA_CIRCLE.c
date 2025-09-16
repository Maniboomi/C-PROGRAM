#include<stdio.h>
int main()
{
	const float pie = 3.14;
	int radius;
	float area;
	printf("Enter the radius : ");
	scanf("%d",&radius);
	area = (float)(pie *radius *radius);
	printf("area of a circle is : %.2f\n",area);
	return 0;
}
