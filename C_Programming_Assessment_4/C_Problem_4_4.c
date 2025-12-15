#include<stdio.h>
int main(){
int a=1;
loop:if(((a%2)==1)&&(a<=9)){
    printf("%d\n",a);}
    a++;
goto loop;
}

