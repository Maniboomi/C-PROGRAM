//COMPOUND_INTEREST
#include<stdio.h>
#include<math.h>

int main()
{
	int principal,n,t;
	double interest_rate;
	printf("Enter the principal value is:");
	scanf("%d",&principal);
	printf("Enter the Compounding period(n) value is:");
	scanf("%d",&n);
	printf("Enter the time period is:");
	scanf("%d",&t);
	printf("Enter the interest_rate value is:");
	scanf("%lf",&interest_rate);
	double future_value;
	future_value =principal * pow((1 + (interest_rate/(n * 100))),n * t);
	printf("The future_value is : %lf\n",future_value);
	float compound_interest;
	compound_interest = future_value - principal;
	printf("The compound interest is %.2f\n",compound_interest);
	return 0;
}
