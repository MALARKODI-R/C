#include<stdio.h>
void check_first_2digit_prime(void);
int main(){
check_first_2digit_prime();
return 0;
}
check_first_2digit_prime(void){
int a,b=0;
printf("Enter a number: ");
scanf("%d",&a);
if(a<=1){
    printf("Not prime");
}
a=a%100;
int i=2;
while(i<=a/2){
    if(a%i==0){
            b++;
    }i++;
}if(b==0){
        printf("Prime");
        }
else{
    printf("Not prime");
    }
}






