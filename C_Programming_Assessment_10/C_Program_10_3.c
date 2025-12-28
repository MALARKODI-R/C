#include<stdio.h>
int main(){
char a[50];
printf("Enter a string: ");
scanf("%s",&a);
for(int i=0;a[i]!='\0';i++){
    printf("%c ",a[i]);
}
}
