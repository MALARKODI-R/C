#include<stdio.h>
int main(){
    int a,rev;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(;a>0;a=a/10){
        rev=(a%10);
        printf("%d",rev);
    }
}
