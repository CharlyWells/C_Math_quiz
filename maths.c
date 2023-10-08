#include <stdio.h> //Standard input and output library for using words such as printf and scanf
#include <math.h> //Math library for using functions such as sqrt and pow

int main(){
float a;
float b;
printf("Enter any two number: %f\n");
scanf("%f",&a);
scanf("%f",&b);
printf("The addition of the numbers you provided is: %f\n", a+b);
printf("The subtraction of the numbers you provided is: %f\n", a-b);
printf("The multiplication of the numbers you provided is: %f\n", a*b);
printf("The division of the numbers you provided is: %f\n", a/b);
printf("The first number exponent the second number you provided is: %f\n",pow(a,b));
printf("The square root of the first value you provided is:  %f\n", sqrt(a));
printf("The square root of the second value you provided is:  %f\n", sqrt(b));

return(0);

}
