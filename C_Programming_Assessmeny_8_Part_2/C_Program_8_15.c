#include<stdio.h>
int disp_single_digit_prime(int a);
int main(){
    int a=1000,b;
    b=disp_single_digit_prime(a);
    printf("%d",b);
    return 0;
    }

int disp_single_digit_prime(int a){
    int b=0;
while(a<=9999){
if((a%7)==0 && (a%9)==0){
b=a;
}a++;
}return b;
}
