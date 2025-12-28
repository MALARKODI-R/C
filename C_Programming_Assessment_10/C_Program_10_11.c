#include<stdio.h>
int main(){
char a[50];int b[50];int i,c;
printf("Enter a string of numbers: ");
scanf("%d",&c);
printf("Enter %d digits: ",c);
for(i=0;i<c;i++){
    scanf("%d",&b[i]);
    a[i]=b[i]+'0';
}
a[c]='\0';
printf("%s",a);
}
