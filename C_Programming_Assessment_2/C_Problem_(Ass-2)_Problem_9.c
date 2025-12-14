#include<stdio.h>
int main(){
int a;
printf("Enter a 2 digit number: ");
scanf("%d",&a);
printf("%d",((a%10)>(a/10))*1);
}
