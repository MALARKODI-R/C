#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(;a>0;a=a/10){
        sum=sum+(a%10);
    }printf("%d",sum);
}
