#include<stdio.h>
int main(){
int a;char b[50];
printf("Enter a integer: ");
scanf("%d",&a);
sprintf(b,"%d",a);
for(int i=0;b[i]!='\0';i++){
    printf("%c\n",b[i]);
}
}
