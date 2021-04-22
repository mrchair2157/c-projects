#include <stdio.h>
#include <math.h>
int main()

{
double x;
double y;
double z;

printf("what number will your raise:\n");
scanf("%lf",&x);

printf("how high will you raise your number:\n");
scanf("%lf", &y);

z = pow(x, y);
printf("%lf to the power of %lf is %lf",x ,y ,z);
}
