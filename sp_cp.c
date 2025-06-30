#include<stdio.h>
int main (){
     int cp ;
    printf("enter cost price :");
    scanf("%d",&cp);
    int sp ;
    printf("enter selling price :");
    scanf("%d",&sp);
    
    if (sp>cp){
        printf("profit");
    }
    if (sp==cp){
        printf("no profit ,no loss");
    }
    else{
        printf("loss");
    }
    return 0;
}