#include<stdio.h>
int main(){
int a,sum=0;
printf("Enter a number: ");
scanf("%d",&a);
loop:if(a!=0){
    sum=sum+(a%10);
    a=a/10;
goto loop;
}
else{
    printf("%d",sum);
}
}
