#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("diff is %d\nproduct is %d\n div is %d\n modulus s %d\n",a-b,a*b,a/b,a%b);
    return 0;
}