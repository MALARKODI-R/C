#include<stdio.h>
int main(){
char str[100],c;
char *p;
int pos=1;
printf("Enter a string: ");
scanf("%s",str);
printf("Enter a charecter: ");
scanf(" %c",&c);
p=str;
while(*p!='\0'){
    if(*p==c){
        printf("%d ",pos);
    }
    p++;
    pos++;
}
}
