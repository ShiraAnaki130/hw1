#include "myMath.h"
#include <stdio.h>
int main(){
    double x;
    printf("please enter a real number\n");
    if(scanf("%lf", &x)!=1){
        printf("Error! the input is not proper.");
        return 0;
    }
    int forE=(int)x;
    float part1= add((float)Exponent(forE),(float)Power(x,3));
    float part2= sub(part1,2);
    printf("the number that you enter is: %f \n",x);
    printf("The value of:f(x)=e^x +x^3 -2,at the point: %f,is--> %0.4lf \n" ,x,part2);
    double part_1=mul(Power(x,2),2);
    part2=add((float)mul(x,3),(float)part_1);
    printf("The value of:f(x)=3x+2x^2,at the point: %f,is--> %0.4lf \n ",x,part2);
    part_1=mul(Power(x,3) ,4);
    double middle=div(part_1,5);
    part2=sub((float)middle,(float)mul(x,2));
    printf("The value of:f(x)=(4x^3)/5-2x,at the point: %f,is--> %0.4lf \n",x,part2);
    return 0;
}