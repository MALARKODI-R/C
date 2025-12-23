#include<stdio.h>
void disp_sum_all_digits(void);
int main(){
disp_sum_all_digits();
return 0;
}
disp_sum_all_digits(void){
int i,sum=0,a;
printf("Enter a number: ");
scanf("%d",&i);
while(i>0){
        sum=sum+(i%10);
         i=i/10;
}printf("%d\n",sum);
}
