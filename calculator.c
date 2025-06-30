#include <stdio.h>

int main(){
    /* variable declaration*/
    int a, b;

    /*take user input */
    printf("enter value of a: ");
    scanf("%d", &a);
    printf("enter value of b: ");
    scanf("%d", &b);

    /*logic for calculator*/
    int sum = a + b;
    char ch;
    int sub = a - b;
    int multiply = a * b;
    int div = a / b;
    int mod = a % b;

    printf("Sum is: %d\n",sum);
    printf("Sub is: %d\n", sub);
    printf("Multiply is: %d\n", multiply);
    printf("Division is: %d\n", div);
    printf("Modulus is: %d\n", mod);
    scanf("\n%c",&ch);
    switch(ch)
    case '+':
         printf("add=%d",(a+b));
         break;
    case '-':
         printf("sub=%d,"(a-b));
         break;
    case '*':
         printf("multiply=%d,"(a*b));
         break;
    case '/':
         printf("div=%d,"(a/b));
         break;
    default:
         printf("please choose correct option to perform operation")

}