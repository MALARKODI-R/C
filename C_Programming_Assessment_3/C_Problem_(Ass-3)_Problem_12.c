#include<stdio.h>
int main(){
int a,b;
printf("Enter a digit number: ");
scanf("%d",&a);
b=a%100;
if((b/10)==(b%10))
    printf("Success");
else
    printf("Failure");
}

