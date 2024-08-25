#include <stdio.h>
#include <math.h>

int main(){
    const float pi =3.14;
    float r ,area =0;
    printf("Enter the radius of circle :");
    scanf("%f",&r);
    area =pi * pow(r,2);
    printf("Area = %.3f",area);
    return 0;
}