#include<stdio.h>
int main(){
int a;char b[50];
printf("Enter a integer: ");
scanf("%d",&a);
sprintf(b,"%d",a);
printf("%s\n",b);
}
