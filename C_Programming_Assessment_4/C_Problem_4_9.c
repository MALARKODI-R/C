#include<stdio.h>
int main(){
int a,count=0;
printf("Enter a number: ");
scanf("%d",&a);
loop:if(a!=0){
count++;
a=a/10;
goto loop;
}
else{
    printf("%d",count);
}
}
