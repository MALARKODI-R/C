#include<stdio.h>
int main(){
int a,count=0;
printf("Enter a number: ");
scanf("%d",&a);
while(a>0){
if((a%10)==0 || (a%10)==1 ||(a%10)==4 || (a%10)==9 ){
count++;
}a=a/10;
}printf("%d",count);
}
