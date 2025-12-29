#include<stdio.h>
void strcopy(char *src,char *dst);
int main(){
    char a[20]="hello";
    char b[20];
    strcopy(a,b);
    printf("%s",b);
}
void strcopy(char *src,char *dst){
    while(*src!='\0'){
        *dst=*src;
        src++;
        dst++;
    }
    *dst='\0';
}
