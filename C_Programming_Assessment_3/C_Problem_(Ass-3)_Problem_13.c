#include<stdio.h>
int main(){
int a,b;
printf("Enter a digit number: ");
scanf("%d",&a);
if((a/100)==(a%100))
    printf("Success");
else
    printf("Failure");
}

