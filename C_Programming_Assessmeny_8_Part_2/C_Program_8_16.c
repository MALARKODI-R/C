#include<stdio.h>
int disp_single_digit_prime(int a);
int main(){
    int a=0,count;
    count=disp_single_digit_prime(a);
    printf("%d",count);
    return 0;
    }

int disp_single_digit_prime(int a){
int b,sum,count=0;
while(a<100000){
    b=a;
    sum=0;
while(b>0){
    sum=sum+(b%10);
    b=b/10;
}
if(sum==14){
count++;
}a++;
}return count;
}
