#include<stdio.h>
int main(){
int a,b;
printf("Enter a 3 digit number: ");
scanf("%d",&a);
b=a%100;
printf("%d",(b/10)==(b%10));
}
