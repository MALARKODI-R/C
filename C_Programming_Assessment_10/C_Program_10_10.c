#include<stdio.h>
int main(){
char a[50];int b[50];int i;
printf("Enter a string of numbers: ");
scanf("%s",a);
for( i=0;a[i]!='\0';i++){
    b[i]=a[i];
}
for(int j=0;j<i;j++){
    printf("%c",b[j]);
}
}
