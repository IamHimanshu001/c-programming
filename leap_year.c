#include<stdio.h>
int main (){
    int year;
    printf("enter a number :");
    scanf("%d",&year);
    
    if (year%4==0){
        printf("it is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
    return 0;
}