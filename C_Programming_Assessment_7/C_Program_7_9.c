#include<stdio.h>
void disp_2digit_odd_sum_tens7(void);
int main(){
disp_2digit_odd_sum_tens7();
return 0;
}
void disp_2digit_odd_sum_tens7(void){
    int sum=0;
for(int i=10;i<=99;i++){
        if(i%2!=0 && (i/10)==7)
          sum=sum+i;
}printf("%d\n",sum);
}
