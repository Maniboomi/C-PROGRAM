#include<stdio.h>
int main()
{
	int a[10],max,i,size;
	printf("Enter number of Elements : ");
	scanf("%d",&size);
	printf("Enter Numbers : ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	max = a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("The Maximum Number is %d\n",max);
}
