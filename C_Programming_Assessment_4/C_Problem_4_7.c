#include<stdio.h>
int main(){
int a=10;
loop:if((a>99))
return 0;
if(((a/10)+(a%10)==6)&&(a%2==0))
printf("%d\n",a);
a++;
goto loop;
}
