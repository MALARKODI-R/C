#include<stdio.h>
int main(){
int a=6,sum=0;
loop:if(a>=1){
    sum=sum+a;
    a--;
goto loop;
}printf("%d\n",sum);
}

