#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("The first value %d is greater than the second value %d",a,b);
    }
    else
    {
        printf("The Second number %d is greater than the first value %d",b,a);
    }
    return 0;
}