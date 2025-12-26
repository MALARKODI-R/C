#include<stdio.h>
int disp_2digit_square(int a);
int main(){
    int a,count;
    printf("Enter a number: ");
    scanf("%d",&a);
    count=disp_2digit_square(a);
    printf("%d",count);
    return 0;
    }

int disp_2digit_square(int a){
    int count=0;
    while(a>=10){
        if((a%100)==16 || (a%100)==25 ||(a%100)==36 || (a%100)==49 || (a%100)==64 || (a%100)==81){
        count++;
     }a=a/10;
}return count;
}
