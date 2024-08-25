#include <stdio.h>

int main(){
    float c , F=0;
    printf("Enter degree celsius :");
    scanf("%f",&c);
    F = ((9.0/5.0)*c)+32;
    printf("Degree fahrenheit : %.3f",F);
    return 0;
}