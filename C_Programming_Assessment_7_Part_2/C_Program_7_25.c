#include<stdio.h>
void disp_biggest_4digit_div7_9(void);
int main(){
    disp_biggest_4digit_div7_9();}

disp_biggest_4digit_div7_9(void){
    int a=1000,b=0;
while(a<=9999){
if((a%7)==0 && (a%9)==0){
b=a;
}a++;
}printf("%d",b);
}





