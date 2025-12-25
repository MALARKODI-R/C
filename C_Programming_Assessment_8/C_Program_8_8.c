#include<stdio.h>
int check_last_digit_odd(int);
int main(){
    int a,result;
    printf("Enter a number: ");
    scanf("%d",&a);
    result=check_last_digit_odd(a);
    printf("%d\n",result);
    return 0;
}
int check_last_digit_odd(int a){
    int b,c,p=1;
    if((a%10)%2==0){
        return a;
    }else{
        b=a;
        while(b>=10){
        b=b/10;
        p=p*10;}
      c=b-1;
    return c*p+(a%p);
    }
}


