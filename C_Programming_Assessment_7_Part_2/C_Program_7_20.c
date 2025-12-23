#include<stdio.h>
void middle_2digit_prime(void);
int main(){
middle_2digit_prime();
return 0;
}
middle_2digit_prime(void){
int b=0;
int i=1;
while(i<=9/2){
    if(i%i==0){
            b++;
    }i++;
}printf("%d",b);
}





