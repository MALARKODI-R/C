#include<stdio.h>
int main(){
int a,count=0;
printf("Enter a number: ");
scanf("%d",&a);
while(a>=10){
if((a%100)==16 || (a%100)==25 ||(a%100)==36 || (a%100)==49 || (a%100)==64 || (a%100)==81){
count++;
}a=a/10;
}printf("%d",count);
}
