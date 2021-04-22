#include <math.h>
#include <stdio.h>

int main()

{
	double a;
	double b;
	double c;

	printf("this program will find a missing length in a right triangle\n ");
	printf("enter you first value: ");
	scanf("%lf",&a);

	printf("enter you second value: ");
	scanf("%lf",&b);

	printf("if a = %lf and b = %lf ",a,b);

	a = pow(a,2);
	b = pow(b,2);
	c = a + b;
	c = sqrt(c);

	printf("then c = %lf",c);
return 0;
}
