#include<stdio.h>
void check_last_digit_odd(void);
int main(){
check_last_digit_odd();
return 0;
}
check_last_digit_odd(void){
    int a,b,c,p=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    if((a%10)%2==0){
        printf("%d",a);
    }else{
        b=a;
        while(b>=10){
        b=b/10;
        p=p*10;}
      c=b-1;
    printf("%d%d",c,a%p);
    }
}


