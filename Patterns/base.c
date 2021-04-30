#include <stdio.h>

int main()

{   
    //intagers and getting how many
    //Delta and Beta are constances
    int Alpha, Beta, Gamma;
    printf("Enter Please Enter How Many Stars You Would Like: \n");
    scanf("%i",&Gamma);
    printf("\n");
    //the upward part of the loop
    //when this loop runs the middle one will print a star then it will do a new line untill a line has the number of star that you entered
    /*   this works by the first loop runing and setting the next center one in a state to do so
    the varible beta can go up to one less the gamma so the stars are printed as meny times as the value of Beta
    Alpha is just the limiter
    */
    for(Beta = 0; Beta <= Gamma - 1; Beta++) {
        for(Alpha = 0; Alpha <= Beta; Alpha++)
        {
           printf("*");
        }
        printf("\n");
    }
    
    //this lop works in the same way as the first one but reveresed
    for(Beta = Gamma + 1; Beta >= 0; Beta--)
    {
        for(Alpha = 3; Alpha <= Beta; Alpha++)
        {
            printf("*");
        }
        printf("\n");
    }
}
