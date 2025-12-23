#include<stdio.h>
void middle_2digit_prime(void);
int main(){
middle_2digit_prime();
return 0;
}
middle_2digit_prime(void){
int a,b=0,c;
printf("Enter a number: ");
scanf("%d",&a);
if(a<=1){
    printf("Not prime");
}
c=a%1000;
a=c/10;
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






