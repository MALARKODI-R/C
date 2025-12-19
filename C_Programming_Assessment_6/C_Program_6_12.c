#include<stdio.h>
int main(){
int i,temp;
printf("Enter a number: ");
scanf("%d",&i);
while(i>0){
        temp=(i%10);
         printf("%d",temp);
         i=i/10;
}
}
