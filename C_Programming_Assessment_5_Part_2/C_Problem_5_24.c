#include<stdio.h>
int main(){
int a,count=0;
printf("Enter a number: ");
scanf("%d",&a);
for(;a>0;a=a/10){
if((a%10)==2 || (a%10)==3 ||(a%10)==5 || (a%10)==7){
count++;
}
}printf("%d",count);
}
