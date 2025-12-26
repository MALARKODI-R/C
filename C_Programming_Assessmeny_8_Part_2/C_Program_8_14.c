#include<stdio.h>
int disp_single_digit_prime(int a);
int main(){
    int a,count;
    printf("Enter a number: ");
    scanf("%d",&a);
    count=disp_single_digit_prime(a);
    printf("%d",count);
    return 0;
    }

int disp_single_digit_prime(int a){
    int count=0;
    while(a>0){
        if((a%10)==2 || (a%10)==3 ||(a%10)==5 || (a%10)==7){
        count++;
     }a=a/10;
}return count;
}
