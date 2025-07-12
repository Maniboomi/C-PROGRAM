#include<stdio.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,12};
	int n = sizeof(arr) / sizeof(arr[0]);
	int Ecount = 0;
        int Ocount = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] % 2 == 0)
		{
			Ecount += 1;
		}
		else
		{
			Ocount += 1;
		}
	}
	printf("The number of odd element is %d\n",Ocount);
	printf("The number of even element is %d\n",Ecount);
	return 0;
}


