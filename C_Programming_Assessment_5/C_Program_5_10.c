#include<stdio.h>
int main(){
    int a,count=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(;a>0;a=a/10){
        count++;
    }printf("%d",count);
}
