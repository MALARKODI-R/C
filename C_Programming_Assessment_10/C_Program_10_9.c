#include<stdio.h>
int main(){
char a[51];int i=0;
printf("Enter a string of numbers: ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++);
for(i=i-1;i>=0;i--){
    printf("%c",a[i]);
}
}
