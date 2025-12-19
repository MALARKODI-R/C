#include<stdio.h>
int main(){
int a,b=0,sum=0,original;
printf("Enter a number: ");
scanf("%d",&a);
if(a<=1){
    printf("Not prime");
    return 0;
}
original=a;
int i=2;
while(i<=original/2){
    if(original%i==0){
            b++;
    }
    if(a!=0){
        sum=sum+(a%10);
        a=a/10;
    }i++;
}if(b==0){
    if(sum==14)
        printf("Prime and sum of digits is 14");
    else
        printf("Prime but sum of digits is not 14");
        }
else{
    if(sum==14)
        printf("Not prime but sum of digits is 14");
    else
        printf("Not prime and sum of digits is not 14");
    }
}
