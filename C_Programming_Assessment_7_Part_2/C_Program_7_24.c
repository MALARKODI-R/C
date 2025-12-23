#include<stdio.h>
void disp_single_digit_prime(void);
int main(){
    disp_single_digit_prime();}

disp_single_digit_prime(void){
int a,count=0;
printf("Enter a number: ");
scanf("%d",&a);
while(a>0){
if((a%10)==2 || (a%10)==3 ||(a%10)==5 || (a%10)==7){
count++;
}a=a/10;
}printf("%d",count);
}




