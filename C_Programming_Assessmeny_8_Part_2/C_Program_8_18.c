#include<stdio.h>
int disp_single_digit_prime(int a);
int main(){
    int a,b,d,lcm1,lcm2;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&d);
    lcm2=disp_single_digit_prime(a);
    printf("%d",lcm2);
    return 0;
    }

int disp_single_digit_prime(int a){
 int b,c,d,lcm1=0,lcm2=0;
    if(a>b){
        c=a;
    }else{
        c=b;
    }int i=c;
    while(i<=a*b){
        if(i%a==0 && i%b==0 && lcm1==0){
            lcm1=i;
        }i++;
    if(lcm1>d){
        c=lcm1;
    }else{
        c=d;
    }
    while(i<=lcm1*d){
        if(i%lcm1==0 && i%d==0 && lcm2==0){
            lcm2=i;
        }i++;
    }
}return lcm2;
}

