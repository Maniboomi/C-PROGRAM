#include<stdio.h>
int main()
{
	int max[2][3] = {{2,8,9},{6,7,1}};
	int found = 0;
	int separate = 6;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("The Checking value in a Matrix : %d\n",max[i][j]);
			if(max[i][j] == separate)
			{	
				printf("Found Value %d at position(%d %d).\n",separate,i,j);
				found = 1;
				break;
			}
			
		}
		if(found)
		{
			break;
		}
	}
	if(!found)
	{
			printf("The Search value is not found !");
	}
	return 0;
}
