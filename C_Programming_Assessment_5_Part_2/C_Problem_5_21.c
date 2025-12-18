#include<stdio.h>
int main(){
int a,count=0;
printf("Enter a number: ");
scanf("%d",&a);
for(;a>=10;a=a/10){
if((a%100)%2!=0){
count++;
}
}printf("%d",count);
}
