#include<stdio.h>
int main(){
int i,sum=0,a;
printf("Enter a number: ");
scanf("%d",&i);
while(i>0){
        sum=sum+(i%10);
         i=i/10;
}printf("%d\n",sum);
}
