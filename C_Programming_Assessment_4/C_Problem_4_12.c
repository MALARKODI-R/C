#include<stdio.h>
int main(){
int a,b=0;
printf("Enter a number: ");
scanf("%d",&a);
loop:if(a!=0){
    b=b*10+(a%10);
    a=a/10;
goto loop;
}
else{
    printf("%d",b);
}
}
