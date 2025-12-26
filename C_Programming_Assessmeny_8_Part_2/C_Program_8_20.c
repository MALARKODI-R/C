#include<stdio.h>
int disp_single_digit_prime(int a);
int main(){
    int a,b,d,hcf;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    hcf=disp_single_digit_prime(a);
    printf("%d",hcf);
    return 0;
    }

int disp_single_digit_prime(int a){
 int b,c,hcf=0;
    if(a<b){
        c=a;
    }else{
        c=b;
    }int i=c;
    while(i>=1){
        if(a%i==0 && b%i==0 ){
            hcf=i;
            break;
        }i--;
    }return hcf;
}


