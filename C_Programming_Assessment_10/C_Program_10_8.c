#include<stdio.h>
int main(){
char a[51];int i=0;
printf("Enter a string of numbers: ");
scanf("%s",a);
while(a[i]=='0'){
    i++;
}
if(a[i]=='\0'){
    printf("0");
}
else{
    printf("%s",&a[i]);
}
}
