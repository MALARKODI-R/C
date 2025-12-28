#include<stdio.h>
int main(){
char a[50];
printf("Enter a string: ");
fgets(a,sizeof(a),stdin);
printf("%s",a);
}
