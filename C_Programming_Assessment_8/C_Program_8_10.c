#include<stdio.h>
int disp_2digit_even_sum6(int b);
int main(){
    int b=0;
    b=disp_2digit_even_sum6(b);
    printf("%d\n",b);
    return 0;
}
int disp_2digit_even_sum6(int b){
    int i=1;
    while(i<=9/2){
    if(i%i==0){
            b++;
    }
    i++;
    } return b;
}

