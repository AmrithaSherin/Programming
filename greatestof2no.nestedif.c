#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two elements:");
    scanf("%d%d",&a,&b);
    if(a!=b){
        printf("%d is not equal to %d \n",a,b);
        if(a>b){
            printf("%d is greater,a");
        }
        else{
            printf("%d is greater",b);
        }
    }
    else{
        printf("%d is equal to %d",a,b);
    }

}