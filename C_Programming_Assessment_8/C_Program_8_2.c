#include<stdio.h>
int disp_2digit_ones5(void);
int main(){
int sum=disp_2digit_ones5();
printf("%d\n",sum);
return 0;
}
int disp_2digit_ones5(void){
    int sum=0;
for(int i=10;i<=99;i++){
        if(i%10 ==5)
        sum=sum+i;
}return sum;
}
