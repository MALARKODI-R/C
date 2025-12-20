#include<stdio.h>
void disp_sum(void);
int main(){
disp_sum();
return 0;
}
void disp_sum(void){
    int sum=0;
for(int i=1;i<=5;i++){
        sum=sum+i;
}printf("%d\n",sum);
}
