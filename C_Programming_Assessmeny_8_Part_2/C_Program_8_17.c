#include<stdio.h>
int disp_single_digit_prime(int a);
int main(){
    int a,lcm;
    lcm=disp_single_digit_prime(a);
    printf("%d",lcm);
    return 0;
    }

int disp_single_digit_prime(int a){
 int b,c,lcm=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        c=a;
    }else{
        c=b;
    }int i=c;
    while(i<=a*b){
        if(i%a==0 && i%b==0 && lcm==0){
            lcm=i;
        }i++;
    }return lcm;
}
