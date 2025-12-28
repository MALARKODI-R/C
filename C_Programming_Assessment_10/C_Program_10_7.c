#include<stdio.h>
int main(){
char a[51];
printf("Enter a string of numbers: ");
scanf("%s",&a);
for(int i=0;a[i]!='\0';i++){
     if(a[i]<'0' || a[i]>'9'){
        printf("InValid number");
        return 0;
     }
}printf("Valid number");
return 0;
}
