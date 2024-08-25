#include <stdio.h>

int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    float res = a % 97;
    if (res == 0){
        printf("Divisible");
    } else{
        printf("Not divisible");
    }

    return 0;
}