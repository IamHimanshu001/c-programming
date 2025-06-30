#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if (n>99 && n<100){
        printf("it is a three digit numbrer");
    }
    else {
        printf("it is not a three digit numbrer");
    }
    return 0;
}