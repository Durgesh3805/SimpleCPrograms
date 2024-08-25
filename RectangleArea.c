#include <stdio.h>
int main(){
    float length , breath ,area =0;
    printf("Enter the length of rectangle :");
    scanf("%f",&length);
    printf("Enter the breath of rectangle :");
    scanf("%f",&breath);
    printf("Area is :");
    area = length * breath ;
    printf("%f",area);

    return 0;
}