#include<stdio.h>
int main (){
     int l  ;
    printf("enter length :");
    scanf("%d",&l);
    int b ;
    printf("enter breadth:");
    scanf("%d",&b);
   int a = l*b;
   int p=2*(l+b); 
   // if (a>p){
     //   printf("area is greater than perimeter");
    //}
    //if (a==b){
      //  printf("they are equal to each other ");
    //}
    if (a<p){
        printf("perimeter is grater than area");
    }
    else{
        printf(" \n area is not greater than perimeter");
    }
    return 0;
}