#include<stdio.h>
int disp_sum(void);
int main(){
int sum=disp_sum();
printf("%d\n",sum);
return 0;
}
int disp_sum(void){
    int sum=0;
for(int i=6;i>=1;i--){
        sum=sum+i;
}return sum;
}
