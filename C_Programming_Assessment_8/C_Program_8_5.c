#include<stdio.h>
int disp_sum_all_digits(int);
int main(){
    int i,sum;
printf("Enter a number: ");
scanf("%d",&i);
sum=disp_sum_all_digits(i);
printf("%d\n",sum);
return 0;
}
int disp_sum_all_digits(int i){
    int sum=0;
while(i>0){
        sum=sum+(i%10);
         i=i/10;
}return sum;
}
