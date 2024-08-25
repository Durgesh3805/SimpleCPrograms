// Write a c pgrm to check whether a student has passed or failed.
// To pass a student requires a total od 40% and 33% in each subject.
// Assume there are 3 subjects and take marks as input from user. 

#include <stdio.h>

int main(){
    float sub1 , sub2 ,sub3 ,total=0;
    float totalPercentage;
    printf("Enter subject1 value :");
    scanf("%f",&sub1);
    printf("30Enter subject2 value :");
    scanf("%f",&sub2);
    printf("Enter subject3 value :");
    scanf("%f",&sub3);
    total =sub1 + sub2 + sub3;
    totalPercentage = total / 3;
    if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && totalPercentage >= 40){
        printf("Student is pass");
    } else{
        printf("Student is fail");
    }
   
 

    return 0;
};
