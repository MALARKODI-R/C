#include<stdio.h>
void getstring(int *n1,int *n2);
int multiplynumbers(int n1,int n2);
int main(){
    int number1,number2,result;
    getnumbers(&number1,&number2);
    result=multiplynumbers(number1,number2);
    printf("%d",result);
}
void getnumbers(int *number1,int *number2){
    printf("Enter 2 numbers: ");
    scanf("%d %d",number1,number2);
}
int multiplynumbers(int number1,int number2){
    return number1*number2;
}
