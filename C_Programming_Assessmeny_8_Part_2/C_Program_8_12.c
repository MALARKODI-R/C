#include<stdio.h>
int disp_total_odd_2digit(int a);
int main(){
    int a,count;
printf("Enter a number: ");
scanf("%d",&a);
count=disp_total_odd_2digit(a);
printf("%d",count);
return 0;}

int disp_total_odd_2digit(int a){
int count=0;
while(a>0){
if((a%10)==0 || (a%10)==1 ||(a%10)==4 || (a%10)==9 ){
count++;
}a=a/10;
}return count;
}
