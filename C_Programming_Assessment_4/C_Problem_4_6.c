#include<stdio.h>
int main(){
int a=1;
loop:if((a%2!=0)){
    if((a>=10)&&(a<=99)){
    if((a/10)+(a%10)==7){
       printf("%d\n",a);
    }
    }}
    a++;
goto loop;
}

