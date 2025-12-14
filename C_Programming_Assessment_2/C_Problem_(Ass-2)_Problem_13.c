#include<stdio.h>
int main(){
int a;
printf("Enter a 3 digit number: ");
scanf("%d",&a);
printf("%d",(a/100)==(a%100));
}
