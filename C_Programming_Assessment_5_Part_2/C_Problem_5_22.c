#include<stdio.h>
int main(){
int a,count=0;
printf("Enter a number: ");
scanf("%d",&a);
for(;a>0;a=a/10){
if((a%10)==0 || (a%10)==1 ||(a%10)==4 || (a%10)==9){
count++;
}
}printf("%d",count);
}
