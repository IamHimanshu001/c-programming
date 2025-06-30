#include<stdio.h>
int main(){
    int a,b;//a>b
    printf("enter divider :");
    scanf("%d",&a);
    printf("enter divisor:");
    scanf("%d",b);
    int q = a/b;
    int r = a-b*q;//divisor * quarient +reminder =divident
printf("tne reminder when %d is divided by %d is ,a b, r ");
return 0;
}