#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* int_ptr;
	int_ptr = (int*)malloc(5 * sizeof(int));
	float* fl_ptr;
	fl_ptr = (float*)malloc(5 * sizeof(float));
	if(int_ptr == NULL || fl_ptr == NULL)
		printf("Memory Allocation is Failed!");
	else
		printf("Memory Allocated succesfully.");
	return 0;
}	
