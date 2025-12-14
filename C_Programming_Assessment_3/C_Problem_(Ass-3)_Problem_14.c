#include<stdio.h>
int main(){
int a=1;
loop:if(a<=5){
printf("%d\n",a);
a++;
goto loop;
}
}

