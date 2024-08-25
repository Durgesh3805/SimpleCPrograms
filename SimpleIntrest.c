// Formula to find simple intrest 
//  Simple interest = P x r x t
// p - principal amount
//  r annual interest rate in decimal  or in % if % formula becomes (p x r x t)/100
//  t is time in year

#include <stdio.h>

int main(){
    int p = 34 , r=9 , t =5;
    float i =(p*r*t)/100;
    printf("The value of simple interestis %f",i);

    return 0;
}