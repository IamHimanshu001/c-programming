#include<stdio.h>
int main(){
    int Ram;
    printf("Ram age:");
    scanf("%d",&Ram);
    int  Shyam;
    printf("Shyam age:");
    scanf("%d",&Shyam);
    int Ajay;
    printf("Ajay age:");
    scanf("%d",&Ajay);
    if (Ram>Shyam && Ram>Ajay){
        printf("Ram is youngest");
    }
    if (Shyam>Ram && Shyam>Ajay ){
        printf("Shyam is youngest");
    }
   // if (r ==s == a){
     //   printf("bath are same age");
    //}
    if (Ajay>Ram && Ajay>Shyam){
        printf("Ajay is youngest");
    }
    return 0;
}
