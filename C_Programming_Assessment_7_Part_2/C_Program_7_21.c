#include<stdio.h>
void disp_total_odd_digit(void);
int main(){
    disp_total_odd_digit();}

disp_total_odd_digit(void){
int a,count=0;
printf("Enter a number: ");
scanf("%d",&a);
while(a>=10){
if((a%100)%2 !=0){
count++;
}a=a/10;
}printf("%d",count);
}

